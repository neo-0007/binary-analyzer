
int ENGINE_ctrl_cmd(ENGINE *e,char *cmd_name,long i,void *p,f *f,int cmd_optional)

{
  int iVar1;
  
  if ((e == (ENGINE *)0x0) || (cmd_name == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0xca,"ENGINE_ctrl_cmd");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  if (*(long *)(e + 0x70) != 0) {
    iVar1 = ENGINE_ctrl(e,0xd,0,cmd_name,(f *)0x0);
    if (0 < iVar1) {
      iVar1 = ENGINE_ctrl(e,iVar1,i,p,f);
      return (int)(0 < iVar1);
    }
  }
  if (cmd_optional == 0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0xdc,"ENGINE_ctrl_cmd");
    ERR_set_error(0x26,0x89,0);
    return 0;
  }
  ERR_clear_error();
  return 1;
}

