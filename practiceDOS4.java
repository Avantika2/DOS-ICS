package chandyP4;
import java.util.*;
public class practiceDOS4 {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int graph[][];
		boolean isDeadlock = false;
		System.out.println("Enter the number of process\n");
		int n = sc.nextInt();
		graph = new int[n][n];
		System.out.println("Enter the wait for graph\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				graph[i][j] = sc.nextInt();
			}
		}
		System.out.println("The wait for grph is:\n");
		new practiceDOS4().Display(graph);
		System.out.println("Enter the process intiating probe");
		int init = sc.nextInt();
		List<Message>msg_list = new ArrayList<Message>();
		int count =0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(graph[i][j]==1)
				{
					Message m = new Message(init,i,j);
					msg_list.add(m);
					count+=1;
					
				}

			}
		}
		System.out.println(msg_list);
		for(int i=0;i<count;i++)
		{
			for(int j=0;j<count;j++)
			{
				if(msg_list.get(i).initiator==msg_list.get(j).to)
				{
					isDeadlock = true;
				}
			}
		}
		if(isDeadlock)
		{
			System.out.println("Deadlock is present");
			
		}
		else
		{
			System.out.println("No deadloick is found");
		}
		
		
		

	}
	void Display(int[][] mat)
	{
		int n = mat[0].length;
		int m = mat.length;
		for(int i=0;i<m;i++)
		{
			for(int j=0 ;j<n;j++)
			{
				System.out.print(mat[i][j]+" ");
			}
			System.out.println();
		}
		
	}

}
