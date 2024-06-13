# pintOS
<details>
    <summary>Mudanças no ./src </summary>
 - Para facilitar o export no src/utils depois de usar `make` usar `export PATH=$PATH:$(pwd)`, se nao quiser colocar no .bashrc/zshrc
Mas no src/threads(adicionado no src/threads/Makefile os comandos para executar o pintos mais facil. com GUI ou sem)
não precisa nem no `make check` do src/threads/build (se der algum erro oque foi modificado ta no src/tests/Make.tests:58)

- Para funcionar no Arch Linux modifiquei o src/Makefile.build:93 para ele reduzir o tamanho do loader.bin
</details>


### Objetivos:
- [ ] Alarm Clock
- [ ] Advanced Scheduler
### Detalhamentos:
<details>
    <summary>Alarm</summary>
    Reimplementar 'timer_sleep()' no 'device/time.c' que ta originalmente implementado com 'busy wait',
    que fica chamando 'thread_yield()' enquanto o tempo não tiver passado
    ideia:
    Adicionar a verificação ao scheduler, adicionando um campo na struct de threads para indicar o tempo que ela deve ficar parada se tiver com status de blocking
</details>
<details>
    <summary>Scheduler</summary>
    Implementar uma mlfqs, na documentação oficial ele diz para dar opção de ter o mlfqs ou o por prioridade, então deveria implementar os dois(verificar!!); Com o mlfqs as prioridades definidas pelas threads devem ser ignoradas e controladas pelo escalonador
    
   [Fila esquema](https://www.google.com/url?sa=i&url=https://medium.com/@francescofranco_39234/multilevel-feedback-queue-3ae862436a95&psig=AOvVaw0uPvTNvKvDx0bKwYGvKyn_&ust=1718223750727000&source=images&cd=vfe&opi=89978449&ved=0CBIQjRxqFwoTCLD727Sw1IYDFQAAAAAdAAAAABAI) 
</details>


Equipe:
| [<img src="https://avatars.githubusercontent.com/u/123107373?s=400&v=4"><br><sub>Márcio</sub>](https://github.com/MAACJR032) | [<img src="https://avatars.githubusercontent.com/u/98539736?v=4"><br><sub>Jambis</sub>](https://github.com/jambis-prg) | [<img src="https://avatars.githubusercontent.com/u/161069298?v=4"><br><sub>Black Sardes</sub>](https://github.com/BlackSardes) | [<img src="https://avatars.githubusercontent.com/u/162517004?v=4"><br><sub>Gabriel Jatobá</sub>](https://github.com/gjcms)
| :---: | :---: | :--:| :--:|
