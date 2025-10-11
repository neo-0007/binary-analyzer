
ulong FUN_005bafe0(undefined8 param_1,undefined4 param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_005bb00a:
  lVar2 = *param_3;
  do {
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/i2d_evp.c",0x46,"i2d_provided");
      FUN_0051f8f0(0xd,0xc4,0);
LAB_005bb100:
      uVar3 = 0xffffffff;
      goto LAB_005bb091;
    }
    local_48 = 0x7fffffff;
    bVar4 = true;
    if (param_4 != (long *)0x0) {
      bVar4 = *param_4 == 0;
    }
    lVar2 = FUN_00518970(param_1,param_2,lVar2,param_3[1],0);
    if (lVar2 == 0) goto LAB_005bb100;
    iVar1 = FUN_00517380(lVar2,param_4,&local_48);
    uVar3 = local_48;
    if (iVar1 != 0) break;
    param_3 = param_3 + 2;
    FUN_00518590(lVar2);
    lVar2 = *param_3;
  } while( true );
  iVar1 = (int)local_48;
  if (!bVar4) {
    FUN_00518590(lVar2);
    uVar3 = (ulong)(0x7fffffff - iVar1);
    goto LAB_005bb091;
  }
  param_3 = param_3 + 2;
  FUN_00518590(lVar2);
  uVar3 = uVar3 & 0xffffffff;
  if (iVar1 != -1) {
LAB_005bb091:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  goto LAB_005bb00a;
}

