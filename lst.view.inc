<?php

function lst_view() {
  drupal_set_title('Local Solar Time');
  drupal_add_css(drupal_get_path('module', 'lst') .'/lst.css');
  drupal_add_js(drupal_get_path('module', 'lst') .'/meeus.js');
  drupal_add_js(drupal_get_path('module', 'lst') .'/lst.js');
  return <<<'END_OF_TEXT'
  <div id="lst_clock">
  <div id="azimuth" class="info"></div>
  <div id="elevation" class="info"></div>
  <svg id="analog" width="100%" height="100%" viewbox="0 0 320 320" version="1.1" xmlns="http://www.w3.org/2000/svg">
  <g transform="translate(160, 160)">
  <g id="face">
  <circle cx="0" cy="0" r="158" stroke="#241F20" stroke-width="2" fill="rgb(142, 166, 31)" stroke-opacity="1" fill-opacity="0.38"/>
  <g id="hour_marks" stroke-width="3" stroke="#241F20" stroke-opacity="1">
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(0)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(30)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(60)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(90)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(120)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(150)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(180)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(210)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(240)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(270)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(300)"/>
  <line x1="0" y1="-145" x2="0" y2="-155" transform="rotate(330)"/>
  </g>
  <g id="minute_marks" stroke-width="2" stroke="#241F20" stroke-opacity="0.62">
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(6)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(12)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(18)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(24)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(36)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(42)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(48)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(54)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(66)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(72)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(78)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(84)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(96)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(102)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(108)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(114)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(126)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(132)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(138)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(144)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(156)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(162)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(168)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(174)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(186)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(192)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(198)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(204)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(216)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(222)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(228)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(234)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(246)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(252)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(258)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(264)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(276)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(282)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(288)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(294)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(306)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(312)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(318)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(324)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(336)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(342)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(348)"/>
  <line x1="0" y1="-151" x2="0" y2="-155" transform="rotate(354)"/>
  </g>
  </g>
  <g id="ecliptic" stroke="none" fill="#241F20" fill-opacity="0.14"/>
  <g id="sun" stroke="none" fill="white" fill-opacity="0.62">
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(0)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(30)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(60)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(90)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(120)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(150)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(180)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(210)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(240)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(270)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(300)"/>
  <polygon points="-2,-7 0,-14 2,-7" transform="rotate(330)"/>
  <circle cx="0" cy="0" r="7" fill="#EAD665" stroke-width="1" stroke="#D09B2C" fill-opacity="1"/>
  </g>
  <circle id="horizon" cx="0" cy="0" r="90" fill="rgb(142, 166, 31)" stroke="#52991D" stroke-width="1" stroke-opacity="0.62" fill-opacity="0.25"/>
  <g id="hour">
  <line x1="0" y1="15" x2="0" y2="-105" stroke-width="5" stroke="#252024"/>
  </g>
  <g id="minute">
  <line x1="0" y1="20" x2="0" y2="-143" stroke-width="3" stroke="#433635"/>
  <circle cx="0" cy="0" r="5" fill="#433635"/>
  </g>
  <g id="second">
  <line x1="0" y1="25" x2="0" y2="-147" stroke-width="2" stroke="#9B1D41"/>
  <circle cx="0" cy="0" r="2.5" fill="#555152"/>
  <polygon points="2,0 1,-1.732 -1,-1.732 -2,0 -1,1.732 1,1.732" stroke-width="0.2" stroke="#241F20" fill="none"/>
  </g>
  </g>
  </svg>
  </div>
  <h2>What</h2>
  <p>This web app shows <a href="//www.google.com/search?q=apparent+solar+time">apparent solar time</a> for your location. This is time based on the daily motion of the sun instead of the <em><a href="//www.google.com/search?q=standard+time">standard time</a></em> you are probably used to. It also shows the position of the sun as a helpful reference.</p>
  <h2>Why</h2>
  <p>One of my goals in life is to get off of, not just <a href="//www.youtube.com/watch?v=84aWtseb2-4">daylight saving time</a>, but standard time as well. I made this app as a tool to evaluate the feasibility of that goal. Standard time may have been good for railroads and telegraphs, but in many parts of the world it really obscures the relationship between our day and what is going on in the sky. Our devices are smart enough now to let us use local time and still travel or communicate globally.</p>
  <h2>How</h2>
  <p>Once you provide your location, the app adjusts <abbr title="Universal Coordinated Time">UTC</abbr> for your longitude and for the <a href="//www.google.com/search?q=equation+of+time">Equation of Time</a>. It displays the results on a <abbr title="scalable vector graphics">SVG</abbr> clock face. An icon of the sun is displayed with the azimuth increasing <em>clockwise</em> from the bottom (south is at the top). The sun’s elevation is shown relative to a circular horizon in the middle of the clock face. Just watch it for a while; it should make sense.</p>
END_OF_TEXT;
}
