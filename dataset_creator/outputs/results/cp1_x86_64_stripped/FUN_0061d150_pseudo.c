
undefined8
FUN_0061d150(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined8 param_5
            )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  lVar2 = FUN_00424530(param_1,0);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_conf.c",0xf5,"v3_generic_extension");
    uVar7 = 0x73;
    pcVar6 = "name=%s";
  }
  else {
    if (param_4 == 1) {
      lVar3 = FUN_0041c870(param_2,&local_50);
LAB_0061d1ee:
      if (lVar3 != 0) {
        puVar4 = (undefined4 *)FUN_004a7670();
        if (puVar4 == (undefined4 *)0x0) {
          FUN_0051f420();
          uVar5 = 0;
          FUN_0051f540("../crypto/x509/v3_conf.c",0x106,"v3_generic_extension");
          FUN_0051f8f0(0x22,0xc0100,0);
        }
        else {
          *(long *)(puVar4 + 2) = lVar3;
          lVar3 = 0;
          *puVar4 = (int)local_50;
          uVar5 = FUN_005a2930(0,lVar2,param_3,puVar4);
        }
        goto LAB_0061d232;
      }
    }
    else if (param_4 == 2) {
      local_48 = 0;
      lVar3 = FUN_00615fe0(param_2,param_5);
      if (lVar3 != 0) {
        iVar1 = FUN_004a7ee0(lVar3,&local_48);
        local_50 = (long)iVar1;
        FUN_004a7f30(lVar3);
        lVar3 = local_48;
        goto LAB_0061d1ee;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_conf.c",0x100,"v3_generic_extension");
    uVar7 = 0x74;
    pcVar6 = "value=%s";
    param_1 = param_2;
  }
  uVar5 = 0;
  puVar4 = (undefined4 *)0x0;
  FUN_0051f8f0(0x22,uVar7,pcVar6,param_1);
  lVar3 = 0;
LAB_0061d232:
  FUN_004a06b0(lVar2);
  thunk_FUN_004a2270(puVar4);
  FUN_0041ad60(lVar3,"../crypto/x509/v3_conf.c",0x113);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

