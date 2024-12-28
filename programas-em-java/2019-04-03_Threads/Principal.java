import javax.swing.*;
import java.awt.*;

public class Principal extends JFrame
{
	JPanel jPanel;

	// Construtor
	public Principal()
	{
		super( "Contador (Multitarefa)" );
 		this.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
		this.setSize( 800, 600 );  // ( largura, altura )
 		this.setLocationRelativeTo( null );  // centraliza na tela
		jPanel = new JPanel( new FlowLayout() );
		this.add( jPanel, BorderLayout.CENTER );
		JButton jButton = new JButton( "Novo" );
		jButton.addActionListener( al -> jPanel.add( new Painel() ) );
		JPanel jPanelButton = new JPanel();
		jPanelButton.add( jButton );
		this.add( jPanelButton, BorderLayout.SOUTH );
		this.setVisible( true );
	}

	public static void main( String args[] )
	{
		new Principal();
	}
	
}
