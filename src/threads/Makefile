include ../Makefile.kernel

# os testes de mlfqs nao funciona pois da alfum erro que nao consegui contornar
TEST=alarm-multiple

gui:	
# sem teste com comparação
# ../utils/pintos $(SIMULATOR) -- run alarm-multiple
# aparentemente funcionando, mas nao acreditar 100%
	
	@if [ ! -d build ]; then \
		echo "Dando build"; \
		$(MAKE) all; \
	fi
		
	../utils/pintos -k -T 60 $(SIMULATOR) -- -q run $(TEST) < /dev/null 2> build/tests/threads/$(TEST).errors > build/tests/threads/$(TEST).output
	perl -I../ ../tests/threads/$(TEST).ck build/tests/threads/$(TEST) build/test/threads/$(TEST).result
ngui:
# ../utils/pintos -v -k -T 60 $(SIMULATOR) -- run alarm-multiple 
# basicamente se nao tiver dado buidl ele da comando de build	
	@if [ ! -d build ]; then \
		echo "Dando build"; \
		$(MAKE) all; \
	fi

	../utils/pintos -v -k -T 60 $(SIMULATOR) -- -q run $(TEST) < /dev/null 2> build/tests/threads/$(TEST).errors > build/tests/threads/$(TEST).output
	perl -I../ ../tests/threads/$(TEST).ck build/tests/threads/$(TEST) build/test/threads/

# ../../utils/pintos -v -k -T 60 --qemu  -- -q  run alarm-multiple < /dev/null 2> tests/threads/alarm-multiple.errors > tests/threads/alarm-multiple.output
# perl -I../.. ../../tests/threads/alarm-multiple.ck tests/threads/alarm-multiple tests/threads/alarm-multiple.result
