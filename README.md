# receiptReader
reads receipts


## Development Environment
1. In *env* folder, create a docker image of the environment by running
```
docker build . -t receipt_reader_devenv
```

2. Create an interactive container of the image:
```
docker run -it -v C:\Users\okina\receiptReader\:/receiptReader --name rrenv receipt_reader_devenv
```

## OpenCV Management Ideas:
1. Submodule
    - seems to slow down git in docker environment
2. apt-install
    - https://vitux.com/opencv_ubuntu/
      - `apt install libopencv-dev python3-opencv`
    - (-) windows VSCode will think there are errors
    - (-) cmake variables will not be able to be passed to external build
3. add in a .gitignored folder (`extern`)
    - must manually acquire extern copy