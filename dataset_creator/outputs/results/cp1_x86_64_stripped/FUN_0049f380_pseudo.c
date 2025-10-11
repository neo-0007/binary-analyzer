
long FUN_0049f380(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_0049ebf0(0,0,*param_2,param_3);
  if (uVar3 == 0) {
LAB_0049f4bb:
    lVar4 = 0;
  }
  else {
    if ((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
      lVar4 = FUN_004a7700();
      if (lVar4 == 0) goto LAB_0049f4bb;
      *(undefined4 *)(lVar4 + 4) = 2;
      iVar1 = FUN_004a1fa0(lVar4,0,uVar3 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_int.c",0x141,"ossl_c2i_ASN1_INTEGER");
        FUN_0051f8f0(0xd,0xc0100,0);
        if (param_1 != (long *)0x0) goto LAB_0049f4ad;
        goto LAB_0049f4b3;
      }
    }
    else {
      iVar1 = FUN_004a1fa0(lVar4,0,uVar3 & 0xffffffff);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/asn1/a_int.c",0x141,"ossl_c2i_ASN1_INTEGER");
        FUN_0051f8f0(0xd,0xc0100,0);
LAB_0049f4ad:
        if (*param_1 != lVar4) {
LAB_0049f4b3:
          thunk_FUN_004a2270(lVar4);
        }
        goto LAB_0049f4bb;
      }
    }
    FUN_0049ebf0(*(undefined8 *)(lVar4 + 8),&local_34,*param_2,param_3);
    if (local_34 == 0) {
      uVar2 = *(uint *)(lVar4 + 4) & 0xfffffeff;
    }
    else {
      uVar2 = *(uint *)(lVar4 + 4) | 0x100;
    }
    *(uint *)(lVar4 + 4) = uVar2;
    *param_2 = *param_2 + param_3;
    if (param_1 != (long *)0x0) {
      *param_1 = lVar4;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

