
public class Tarefa2 implements Runnable
{
	private Painel jPainel;

	public Tarefa2( Painel jPainel )
	{
		this.jPainel = jPainel;
		Thread t = new Thread( this, "nome_da_thread" );
		t.start();  // Executa o método run()
	}

	public void run()
	{
		long N = 10000000;
		for ( long i = 0; i <= N; i++ )
		{
			if ( i == N ) i = 0;
			jPainel.setText( "" + i );
			try {
				Thread.sleep( 0 );
			} catch ( InterruptedException e ) {
				e.printStackTrace();
			}
		}  // for
	}
	
}