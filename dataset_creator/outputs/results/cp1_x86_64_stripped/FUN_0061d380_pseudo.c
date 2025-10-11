
long FUN_0061d380(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x28))(param_4,0);
    if ((0 < iVar1) &&
       (local_50 = FUN_0041ad90((long)iVar1,"../crypto/x509/v3_conf.c",0x9f), local_50 != 0)) {
      local_48 = local_50;
      (**(code **)(param_1 + 0x28))(param_4,&local_48);
      goto LAB_0061d3d5;
    }
    piVar3 = (int *)0x0;
  }
  else {
    uVar2 = (**(code **)(param_1 + 8))();
    iVar1 = FUN_004a6000(param_4,&local_50,uVar2);
    if (-1 < iVar1) {
LAB_0061d3d5:
      piVar3 = (int *)FUN_004a7670();
      lVar4 = local_50;
      if (piVar3 != (int *)0x0) {
        local_50 = 0;
        *(long *)(piVar3 + 2) = lVar4;
        *piVar3 = iVar1;
        lVar4 = FUN_005a2a50(0,param_2,param_3,piVar3);
        if (lVar4 != 0) {
          thunk_FUN_004a2270(piVar3);
          goto LAB_0061d417;
        }
        goto LAB_0061d449;
      }
    }
    piVar3 = (int *)0x0;
  }
LAB_0061d449:
  FUN_0051f420();
  lVar4 = 0;
  FUN_0051f540("../crypto/x509/v3_conf.c",0xb2,"do_ext_i2d");
  FUN_0051f8f0(0x22,0xc0100,0);
  FUN_0041ad60(local_50,"../crypto/x509/v3_conf.c",0xb3);
  thunk_FUN_004a2270(piVar3);
LAB_0061d417:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

