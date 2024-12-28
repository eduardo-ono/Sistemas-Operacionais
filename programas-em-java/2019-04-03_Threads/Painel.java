import javax.swing.*;

public class Painel extends JPanel
{
	private JLabel jLabel;
	
	// Construtor
	Painel()
	{
		setBorder( BorderFactory.createTitledBorder( "" ) );
		jLabel = new JLabel();
		jLabel.setFont( new java.awt.Font( jLabel.getFont().getName(), 0, 36 ) );
		this.add( jLabel );
		new Tarefa2( this );
	}
	
	public void setText( String str )
	{
		jLabel.setText( str );
		jLabel.repaint();
	}
	
}