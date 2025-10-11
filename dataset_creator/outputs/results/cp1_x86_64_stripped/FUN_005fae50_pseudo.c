
bool FUN_005fae50(long param_1,long param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    bVar5 = false;
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0xf0,"ENGINE_ctrl_cmd_string");
    FUN_0051f8f0(0x26,0xc0102,0);
    goto LAB_005faee5;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    iVar1 = FUN_005fa870(param_1,0xd,0,param_2,0);
    if (0 < iVar1) {
      iVar2 = FUN_005facd0(param_1,iVar1);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/engine/eng_ctrl.c",0x106,"ENGINE_ctrl_cmd_string");
        FUN_0051f8f0(0x26,0x86,0);
        bVar5 = false;
        goto LAB_005faee5;
      }
      uVar3 = FUN_005fa870(param_1,0x12,(long)iVar1,0,0);
      if ((int)uVar3 < 0) {
        FUN_0051f420();
        uVar4 = 0x110;
LAB_005fb099:
        bVar5 = false;
        FUN_0051f540("../crypto/engine/eng_ctrl.c",uVar4,"ENGINE_ctrl_cmd_string");
        FUN_0051f8f0(0x26,0x6e,0);
      }
      else {
        if ((uVar3 & 4) == 0) {
          if (param_3 == (char *)0x0) {
            FUN_0051f420();
            bVar5 = false;
            FUN_0051f540("../crypto/engine/eng_ctrl.c",0x127,"ENGINE_ctrl_cmd_string");
            FUN_0051f8f0(0x26,0x87,0);
            goto LAB_005faee5;
          }
          if ((uVar3 & 2) == 0) {
            if ((uVar3 & 1) == 0) {
              FUN_0051f420();
              uVar4 = 0x138;
              goto LAB_005fb099;
            }
            uVar4 = FUN_006e94d0(param_3,&local_38,10);
            if ((local_38 == param_3) || (*local_38 != '\0')) {
              FUN_0051f420();
              bVar5 = false;
              FUN_0051f540("../crypto/engine/eng_ctrl.c",0x13d,"ENGINE_ctrl_cmd_string");
              FUN_0051f8f0(0x26,0x85,0);
              goto LAB_005faee5;
            }
            param_3 = (char *)0x0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          if (param_3 != (char *)0x0) {
            FUN_0051f420();
            bVar5 = false;
            FUN_0051f540("../crypto/engine/eng_ctrl.c",0x118,"ENGINE_ctrl_cmd_string");
            FUN_0051f8f0(0x26,0x88,0);
            goto LAB_005faee5;
          }
          param_3 = (char *)0x0;
          uVar4 = 0;
        }
        iVar1 = FUN_005fa870(param_1,iVar1,uVar4,param_3,0);
        bVar5 = 0 < iVar1;
      }
      goto LAB_005faee5;
    }
  }
  if (param_4 == 0) {
    FUN_0051f420();
    bVar5 = false;
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0x102,"ENGINE_ctrl_cmd_string");
    FUN_0051f8f0(0x26,0x89,0);
  }
  else {
    FUN_0051e390();
    bVar5 = true;
  }
LAB_005faee5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

