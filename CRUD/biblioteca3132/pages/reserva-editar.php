<h1>Editar Reserva</h1>
<?php
	$sql_1 = "SELECT * FROM reserva WHERE id_reserva=".$_REQUEST["id_reserva"];

	$res_1 = $conn->query($sql_1) or die($conn->error);

	$row_1 = $res_1->fetch_object();
?>
<form action="?page=reserva-salvar" method="POST">
	<input type="hidden" name="acao" value="editar">
	<input type="hidden" name="id_reserva" value="<?php print $row_1->id_reserva; ?>">
	<div class="mb-3">
		<label>Aluno</label>
		<select name="aluno_id_aluno" class="form-control">
			<option>-=Selecione um(a) aluno=-</option>
		<?php
			$sql = "SELECT * FROM aluno";
			$res = $conn->query($sql) or die($conn->error);
			if($res->num_rows > 0){
				while($row = $res->fetch_object()){
					if($row->id_aluno == $row_1->aluno_id_aluno){
						print "<option value='".$row->id_aluno."' selected>";
						print $row->nome_aluno."</option>";
					}else{
						print "<option value='".$row->id_aluno."'>";
						print $row->nome_aluno."</option>";
					}					
				}
			}else{
				print "Não tem aluno(a) cadastrado(a)";
			}
		?>
		</select>
	</div>

    <div class="mb-3">
		<label>Livro</label>
		<select name="livro_id_livro" class="form-control">
			<option>-=Selecione um livro=-</option>
		<?php
			$sql = "SELECT * FROM livro";
			$res = $conn->query($sql) or die($conn->error);
			if($res->num_rows > 0){
				while($row = $res->fetch_object()){
					if($row->id_livro == $row_1->livro_id_livro){
						print "<option value='".$row->id_livro."' selected>";
						print $row->nome_livro."</option>";
					}else{
						print "<option value='".$row->id_livro."'>";
						print $row->nome_livro."</option>";
					}					
				}
			}else{
				print "Não tem livro cadastrado";
			}
		?>
		</select>
	</div>

    <div class="mb-3">
		<label>Atendente</label>
		<select name="atendente_id_atendente" class="form-control">
			<option>-=Selecione um(a) atendente=-</option>
		<?php
			$sql = "SELECT * FROM atendente";
			$res = $conn->query($sql) or die($conn->error);
			if($res->num_rows > 0){
				while($row = $res->fetch_object()){
					if($row->id_atendente == $row_1->atendente_id_atendente){
						print "<option value='".$row->id_atendente."' selected>";
						print $row->nome_atendente."</option>";
					}else{
						print "<option value='".$row->id_atendente."'>";
						print $row->nome_atendente."</option>";
					}					
				}
			}else{
				print "Não tem atendente cadastrado(a)";
			}
		?>
		</select>
	</div>

	<div class="mb-3">
		<label>Data de emprestimo</label>
		<input type="date" name="data_emprestimo" value="<?php print $row_1->data_emprestimo; ?>" class="form-control">
	</div>	
    <div class="mb-3">
		<label>Data de devolução</label>
		<input type="date" name="data_devolucao" value="<?php print $row_1->data_devolucao; ?>" class="form-control">
	</div>	
	<div class="mb-3">
		<button class="btn btn-success" type="submit">Enviar</button>
	</div>
</form>