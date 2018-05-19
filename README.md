# drupal-lst
Drupal 7.x module for a Local Solar Time clock

---

# Local Solar Time

## What

This web app shows apparent solar time for your location. This is time based on the daily motion of the sun instead of the standard time you are probably used to. It also shows the position of the sun as a helpful reference.

## Why

One of my goals in life is to get off of, not just daylight saving time, but standard time as well. I made this app as a tool to evaluate the feasibility of that goal. Standard time may have been good for railroads and telegraphs, but in many parts of the world it really obscures the relationship between our day and what is going on in the sky. Our devices are smart enough now to let us use local time and still travel or communicate globally.

## How

Once you provide your location, the app adjusts UTC for your longitude and for the Equation of Time. It displays the results on a SVG clock face. An icon of the sun is displayed with the azimuth increasing clockwise from the bottom (south is at the top). The sun’s elevation is shown relative to a circular horizon in the middle of the clock face. Just watch it for a while; it should make sense.
