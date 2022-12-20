<h1>Cadastrar Livro</h1>
<form action="?page=livro-salvar" method="POST">
	<input type="hidden" name="acao" value="cadastrar">
	<div class="mb-3">
		<label>Categoria</label>
		<select name="categoria_id_categoria" class="form-control">
			<option>-=Selecione a categoria=-</option>
		<?php
			$sql = "SELECT * FROM categoria";
			$res = $conn->query($sql) or die($conn->error);
			if($res->num_rows > 0){
				while($row = $res->fetch_object()){
					print "<option value='".$row->id_categoria."'>";
					print $row->nome_categoria."</option>";
				}
			}else{
				print "Não tem categoria cadastrada";
			}
		?>
		</select>
	</div>

	<div class="mb-3">
		<label>Título do Livro</label>
		<input type="text" name="titulo_livro" class="form-control">
	</div>
	<div class="mb-3">
		<label>Autor</label>
		<input type="text" name="autor_livro" class="form-control">
	</div>
	<div class="mb-3">
		<label>Editora</label>
		<input type="text" name="editora_livro" class="form-control">
	</div>
	<div class="mb-3">
		<label>Edição</label>
		<input type="text" name="edicao_livro" class="form-control">
	</div>
	<div class="mb-3">
		<label>Ano</label>
		<input type="date" name="ano_livro" class="form-control">
	</div>
	<div class="mb-3">
    <label>Localidade</label>
		<input type="text" name="localidade_livro" class="form-control">
	
	</div>
	<div class="mb-3">
		<button type="submit" class="btn btn-success">Enviar</button>
	</div>
</form>