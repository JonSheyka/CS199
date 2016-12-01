#include <iostream>
#include <math>
#include "grid.hpp"
Grid::Grid()
{
  dimension = 0;
  arr = NULL;
}

Grid::Grid(int dimension)
{
	this->dimension = dimension;
	this->arr = new *int[dimension];
	for (int i = 0; i < dimension; i++) {
		arr[i] = new int[dimension];
	}
}


Grid::Grid(const Grid & obj)
{
  dimension = obj.dimension;
	for(int i = 0; i < dimension; i++) {
		for(int j = 0; j < dimension; j++) {
			this->arr[i][j] =  obj.arr[i][j];
		}
}


void Grid::swapRows(int row1, int row2)
{
	if(row1 != row2) {
		for(int i = 0; i < dimension; i++) {
			int temp = arr[row1][i];
			arr[row1][i] = arr[row2][i];
			arr[row2][i] = arr]row1][i];
		}
	}
}


void Grid::swapColumns(int col1, int col2)
{
	if(col1 != col2) {
			for(int i = 0; i < dimension; i++) {
				int temp = arr[row1][i];
				arr[row1][i] = arr[row2][i];
				arr[row2][i] = arr]row1][i];
			}
		}
}
const Grid Grid::operator +(const Grid &obj){
  int dim = max(dimesnion, obj2.dimension);
  Grid newGrid(dim);
  for(int i =0; i < dimension; i++){
    for(int j = 0; j < dimension; j++)
      newGrid.arr[i][j] = arr[i][j];
  }
  for(int i = 0; i < obj2.dimension; i++){
    for(int j = 0; j < obj2.dimension; j++)
      newGrid.arr[i][j] += obj2.arr[i][j];
  }
  return newGrid;
}
Grid & Grid::operator =(const Grid & obj){
  if(this != &obj){
      clear();
  }
  return this;
}
Grid Grid::multCoords(Grid & obj){
  Grid newGrid(obj.dimension);
  for(int i =0; i <obj.dimesnion; i++){
    for(int j =0; j< obj.dimension;j++){
      newGrid.arr[i][j] = i*j*obj.arr[i][j]
    }
  }
  return newGrid;
}
void Grid::printGrid(){
  for(int i = 0; i <dimension; i++){
    for(int j = 0; j <dimension; j++)
      cout << " " << arr[i][j];
      cout<< " " << endl;
  }
}
Grid::~Grid(){
  clear();
}
Void Grid::clear(){
  if(arr != NULL){
    for(int i = 0; i < dimension; i++)
    delete arr[i];
    for(j = 0; j < dimension; j++)
    delete arr[j];
    arr = NULL;
  }
  dimension = 0;
}
void Grid::copy(const Grid & obj){
  dimension = obj.dimension;
  for(int i =0; i< obj.dimension; i++){
    for(int j =0; j <obj.dimension; j++)
     arr[i][j] += obj.arr[i][j];
  }
}
int main(){
  cout << "Done" << endl;
  return 0;
}
