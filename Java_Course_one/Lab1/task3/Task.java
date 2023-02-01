
public class Task {

    public static void main(String[] args) {

		int argue = args.length;
		if(argue < 2){
			System.out.println("You have to wrtie 2 values!");
                        return;
		}
         int len=0;
         len=  Integer.parseInt(args[0]);
          
		for(int i = 0; i < len; i++){
			System.out.println(args[1]);
		}

  }
    }

