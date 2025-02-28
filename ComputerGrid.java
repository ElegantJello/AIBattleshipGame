public class ComputerGrid extends Grid{
	public ComputerGrid() {
		super();

	}

	public void clearSpace() {
		for(int r=0;r<grid.length;r++){
			for(int c=0;c<grid[r].length; c++){
				if(grid[r][c]=='-') {
					grid[r][c]='o';
				}
			}
		}
	}
}