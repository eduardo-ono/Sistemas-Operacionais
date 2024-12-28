
public class Tarefa1 extends Thread
{
	private Painel jPainel;

	public Tarefa1( Painel jPainel )
	{
		this.jPainel = jPainel;
		this.start();  // Executa o método run()
	}

	public void run()
	{
		long N = 100;
		for ( long i = 0; i <= N; i++ )
		{
			if ( i == N ) i = 0;
			jPainel.setText( "" + i );
			try {
				Thread.sleep( 1000 );
			} catch ( InterruptedException e ) {
				e.printStackTrace();
			}
		}  // for
	}
	
}