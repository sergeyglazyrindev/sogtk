include ../../src/Inventor/Gtk/common/Makefile.common

KEYMANPAGE = So@Gui@Object.3

$(KEYMANPAGE): $(SoGuiBuiltFiles)
	@sim_ac_doxygen_exe@ $(top_builddir)/sogui.doxygen

filelist.txt: $(KEYMANPAGE)
	ls *.3 >filelist.txt

if BUILD_MANPAGES

all-local: filelist.txt

clean-local:
	rm -f filelist.txt *.3

install-data-local: install-man

uninstall-local: uninstall-man

install-man: filelist.txt
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(mandir)/man3
	@list="`cat filelist.txt`"; \
	for i in $$list; do \
	  echo " $(INSTALL_DATA) $$i $(DESTDIR)$(mandir)/man3/$$i"; \
	  $(INSTALL_DATA) $$i $(DESTDIR)$(mandir)/man3/$$i; \
	done

uninstall-man: filelist.txt
	@$(NORMAL_UNINSTALL)
	@list="`cat filelist.txt`"; \
	for i in $$list; do \
	  echo " rm -f $(DESTDIR)$(mandir)/man3/$$i"; \
	  rm -f $(DESTDIR)$(mandir)/man3/$$i; \
	done
	@echo " rmdir $(DESTDIR)$(mandir)"; \
	rmdir $(DESTDIR)$(mandir) 2>/dev/null; \
	:

endif

