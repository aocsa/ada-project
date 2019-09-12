install miniconda

https://docs.conda.io/en/latest/miniconda.html

chmod +x Miniconda3-latest-Linux-x86_64.sh

bash Miniconda3-latest-Linux-x86_64.sh

source activate base

conda install -c anaconda cmake
conda install -c conda-forge gtest
conda install -c conda-forge gmock
conda install -c hi2p-perim fmt

Note of osx:
* brew install fmt

Edit CmakeList.txt

/home/utec/miniconda3 => /home/'my_user_home'/miniconda3

cd /my_project_path/
mkdir build
cd build
cmake ..
make all
