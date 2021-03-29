IMAGE_ID=$(docker build -q -f Dockerfile .)

CWD=`realpath $(dirname $0)`

docker run --rm --user $(id -u):$(id -g) -it \
	-v $CWD:/app \
	-v $CWD/..:/app/redis \
	${IMAGE_ID} \
	debuild -b -uc -us


