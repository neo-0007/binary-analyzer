
int ENGINE_ctrl_cmd_string(ENGINE *e,char *cmd_name,char *arg,int cmd_optional)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong i;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((e == (ENGINE *)0x0) || (cmd_name == (char *)0x0)) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0xf0,"ENGINE_ctrl_cmd_string");
    ERR_set_error(0x26,0xc0102,0);
    goto LAB_005f1645;
  }
  if (*(long *)(e + 0x70) != 0) {
    iVar1 = ENGINE_ctrl(e,0xd,0,cmd_name,(f *)0x0);
    if (0 < iVar1) {
      iVar2 = ENGINE_cmd_is_executable(e,iVar1);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/engine/eng_ctrl.c",0x106,"ENGINE_ctrl_cmd_string");
        ERR_set_error(0x26,0x86,0);
        uVar3 = 0;
        goto LAB_005f1645;
      }
      uVar3 = ENGINE_ctrl(e,0x12,(long)iVar1,(void *)0x0,(f *)0x0);
      if ((int)uVar3 < 0) {
        ERR_new();
        uVar4 = 0x110;
LAB_005f17f9:
        uVar3 = 0;
        ERR_set_debug("../crypto/engine/eng_ctrl.c",uVar4,"ENGINE_ctrl_cmd_string");
        ERR_set_error(0x26,0x6e,0);
      }
      else {
        if ((uVar3 & 4) == 0) {
          if (arg == (char *)0x0) {
            ERR_new();
            uVar3 = 0;
            ERR_set_debug("../crypto/engine/eng_ctrl.c",0x127,"ENGINE_ctrl_cmd_string");
            ERR_set_error(0x26,0x87,0);
            goto LAB_005f1645;
          }
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 1) == 0) {
              ERR_new();
              uVar4 = 0x138;
              goto LAB_005f17f9;
            }
            i = strtoll(arg,&local_38,10);
            if ((local_38 == arg) || (*local_38 != '\0')) {
              ERR_new();
              uVar3 = 0;
              ERR_set_debug("../crypto/engine/eng_ctrl.c",0x13d,"ENGINE_ctrl_cmd_string");
              ERR_set_error(0x26,0x85,0);
              goto LAB_005f1645;
            }
            arg = (char *)0x0;
          }
          else {
            i = 0;
          }
        }
        else {
          if (arg != (char *)0x0) {
            ERR_new();
            uVar3 = 0;
            ERR_set_debug("../crypto/engine/eng_ctrl.c",0x118,"ENGINE_ctrl_cmd_string");
            ERR_set_error(0x26,0x88,0);
            goto LAB_005f1645;
          }
          arg = (char *)0x0;
          i = 0;
        }
        iVar1 = ENGINE_ctrl(e,iVar1,i,arg,(f *)0x0);
        uVar3 = (uint)(0 < iVar1);
      }
      goto LAB_005f1645;
    }
  }
  if (cmd_optional == 0) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/engine/eng_ctrl.c",0x102,"ENGINE_ctrl_cmd_string");
    ERR_set_error(0x26,0x89,0);
  }
  else {
    ERR_clear_error();
    uVar3 = 1;
  }
LAB_005f1645:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

