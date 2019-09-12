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

Note of osx:
* brew install fmt

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