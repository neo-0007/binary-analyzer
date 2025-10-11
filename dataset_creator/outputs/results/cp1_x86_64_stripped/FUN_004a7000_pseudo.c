
undefined8 FUN_004a7000(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long **pplVar4;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (*(code *)param_2[4])();
  uVar1 = *param_2;
  pplVar4 = (long **)param_1;
  if ((uVar1 & 0x1000) != 0) {
    pplVar4 = &local_38;
    local_38 = param_1;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x300) == 0) {
      if ((uVar1 & 6) == 0) {
        uVar2 = FUN_004a7120(pplVar4,uVar2,(uint)uVar1 & 0x1000,param_3,param_4);
      }
      else {
        lVar3 = FUN_00436410();
        if (lVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/asn1/tasn_new.c",0xe9,"asn1_template_new");
          FUN_0051f8f0(0xd,0xc0100,0);
          uVar2 = 0;
        }
        else {
          *pplVar4 = (long *)lVar3;
          uVar2 = 1;
        }
      }
      goto LAB_004a7062;
    }
  }
  else if ((uVar1 & 0x306) == 0) {
    uVar2 = (*(code *)param_2[4])();
    FUN_004a6f70(pplVar4,uVar2);
    uVar2 = 1;
    goto LAB_004a7062;
  }
  *pplVar4 = (long *)0x0;
  uVar2 = 1;
LAB_004a7062:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

