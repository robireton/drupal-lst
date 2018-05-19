Drupal.behaviors.lst = {
  attach: function(context, settings) {
    navigator.geolocation.getCurrentPosition(
      position => {
        window.setInterval(() => {
          const t = new Date()
          const sun = positionSun(t.toJDE(), position.coords.latitude, position.coords.longitude)
          const local = ((t.getUTCHours() + t.getUTCMinutes()/60 + t.getUTCSeconds()/3600 + t.getUTCMilliseconds()/3600000 + position.coords.longitude * 24 / 360 + sun.E/60)*15).normalizedDegrees()/15

          const hour_angle = local * 360 / 12
          document.getElementById('hour').setAttribute('transform', `rotate(${hour_angle})`)

          const minute_angle = (local - Math.floor(local / 24)) * 360
          document.getElementById('minute').setAttribute('transform', `rotate(${minute_angle})`)

          const second_angle = Math.floor((local*60 - Math.floor(local*60))*60) * 6
          document.getElementById('second').setAttribute('transform', `rotate(${second_angle})`)

          const azimuth = sun.A.DegreesToRadians()
          const elevation = sun.h.DegreesToRadians()
          const r = 90 + 40*Math.sin(elevation)
          const x = r * Math.sin(azimuth)
          const y = r * Math.cos(azimuth)

          document.getElementById('sun').setAttribute('transform', `translate(${-x} ${y})`)
          document.getElementById('azimuth').innerHTML = `azimuth:<br><b>${sun.A.DDtoDMS()}</b>`
          document.getElementById('elevation').innerHTML = `azimuth:<br><b>${sun.h.DDtoDMS()}</b>`
        }, 200)
      },
      err => {
        console.log('geo fail: ' + err.code + ' (' + err.message + ')')
        switch (err.code) {
          case 1: //permission denied
          window.alert('Won’t work without position.')
          break

          case 2: //position unavailable
          window.alert('Your position is not available.')
          break

          case 3: //timeout
          window.alert('Stopped waiting for position. Reload page to retry.')
          break
        }
      }
    )
  }
};
