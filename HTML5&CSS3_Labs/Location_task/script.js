


        var para = document.getElementById("para");
        var btn = document.querySelector("button");
        btn.addEventListener("click", geoLocation);
        function geoLocation() {
     
                
         
            if (navigator.geolocation) {

                navigator.geolocation.getCurrentPosition(showPosition, showError)
               
            }
            else {
                para.innerHTML = "geo location isn't supported by this browser"
            }
          
        }

        function showPosition(position) {
            para.style.display = "block";
            var lat = position.coords.latitude
            var long = position.coords.longitude
            para.innerHTML = "Lattitude: " + lat + "<br> Longitude: " + long
            var url = "http://maps.google.com/maps?q=" + lat + "," + long
            window.open(url, '_blank') //to oben in new window

        }
        function showError(err) {

            switch (err.code) {
                case err.PERMISSION_DENIED:
                    para.innerHTML = "permission denied"
                    break;
                case err.TIMEOUT:
                    para.innerHTML = "it tooke alonge time"
                    break;
                case err.UNKNOWN_ERROR:
                    para.innerHTML = "unknown error occured"
                    break;
            }

        }


