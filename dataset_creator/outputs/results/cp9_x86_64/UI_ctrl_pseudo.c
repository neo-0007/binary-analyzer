
int UI_ctrl(UI *ui,int cmd,long i,void *p,f *f)

{
  uint uVar1;
  uint uVar2;
  
  if (ui == (UI *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x227,"UI_ctrl");
    ERR_set_error(0x28,0xc0102,0);
    uVar1 = 0xffffffff;
  }
  else {
    if (cmd == 1) {
      uVar1 = *(uint *)(ui + 0x28);
      uVar2 = uVar1 | 0x100;
      if (i == 0) {
        uVar2 = uVar1 & 0xfffffeff;
      }
      *(uint *)(ui + 0x28) = uVar2;
      return uVar1 >> 8 & 1;
    }
    if (cmd != 2) {
      ERR_new();
      ERR_set_debug("../crypto/ui/ui_lib.c",0x239,"UI_ctrl");
      ERR_set_error(0x28,0x6a,0);
      return -1;
    }
    uVar1 = *(uint *)(ui + 0x28) & 1;
  }
  return uVar1;
}

