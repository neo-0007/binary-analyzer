
void _nl_locale_subfreeres(void)

{
  long in_FS_OFFSET;
  
  if (PTR__nl_current_LC_PAPER_used_0092df60 != (undefined *)0x0) {
    free_category(3,**(undefined8 **)(in_FS_OFFSET + -0x80),_nl_C_LC_COLLATE);
  }
  if (PTR__nl_current_LC_PAPER_used_0092dfa0 != (undefined *)0x0) {
    free_category(0,**(undefined8 **)(in_FS_OFFSET + -0xd8),_nl_C_LC_CTYPE);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df88 != (undefined *)0x0) {
    free_category(4,**(undefined8 **)(in_FS_OFFSET + -200),_nl_C_LC_MONETARY);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df80 != (undefined *)0x0) {
    free_category(1,**(undefined8 **)(in_FS_OFFSET + -0xc0),_nl_C_LC_NUMERIC);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df38 != (undefined *)0x0) {
    free_category(2,**(undefined8 **)(in_FS_OFFSET + -0xb8),_nl_C_LC_TIME);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df70 != (undefined *)0x0) {
    free_category(5,**(undefined8 **)(in_FS_OFFSET + -0xd0),_nl_C_LC_MESSAGES);
  }
  if (PTR__nl_current_LC_PAPER_used_0092ded8 != (undefined *)0x0) {
    free_category(7,**(undefined8 **)(in_FS_OFFSET + -0xb0),_nl_C_LC_PAPER);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df30 != (undefined *)0x0) {
    free_category(8,**(undefined8 **)(in_FS_OFFSET + -0xa8),_nl_C_LC_NAME);
  }
  if (PTR__nl_current_LC_PAPER_used_0092dee8 != (undefined *)0x0) {
    free_category(9,**(undefined8 **)(in_FS_OFFSET + -0xa0),_nl_C_LC_ADDRESS);
  }
  if (PTR__nl_current_LC_PAPER_used_0092dfc0 != (undefined *)0x0) {
    free_category(10,**(undefined8 **)(in_FS_OFFSET + -0x98),_nl_C_LC_TELEPHONE);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df20 != (undefined *)0x0) {
    free_category(0xb,**(undefined8 **)(in_FS_OFFSET + -0x90),_nl_C_LC_MEASUREMENT);
  }
  if (PTR__nl_current_LC_PAPER_used_0092df18 != (undefined *)0x0) {
    free_category(0xc,**(undefined8 **)(in_FS_OFFSET + -0x88),_nl_C_LC_IDENTIFICATION);
  }
  if (PTR__nl_C_name_00930a90 != "C") {
    free(PTR__nl_C_name_00930a90);
    PTR__nl_C_name_00930a90 = "C";
  }
  _nl_archive_subfreeres();
  return;
}

