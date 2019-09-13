install miniconda

https://docs.conda.io/en/latest/miniconda.html

chmod +x Miniconda3-latest-Linux-x86_64.sh

bash Miniconda3-latest-Linux-x86_64.sh

source activate base

```
conda install -c anaconda cmake
conda install -c conda-forge gtest
conda install -c conda-forge gmock
conda install -c hi2p-perim fmt
```

Note for osx:
* brew install fmt

Note for user of visual studio code
Edit "home_user" .vscode/c_cpp_properties.json
"/home/home_user/miniconda3/include/"


Build and RUN
```
./conda/recipes/utecdf/build.sh

run main:
./utecdf_bin

run tests
make test
```

or 
```
cd /my_project_path/
mkdir build
cd build
cmake ..
make all
```