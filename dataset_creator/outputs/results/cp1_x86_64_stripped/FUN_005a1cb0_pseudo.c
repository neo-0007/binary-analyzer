
undefined4 FUN_005a1cb0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffff;
  uVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x88));
  iVar2 = FUN_00424c50(uVar1,&local_24,&local_28);
  if (iVar2 != 0) {
    if (local_28 != 0) {
      *(int *)(param_1 + 0xb4) = local_28;
      *(int *)(param_1 + 0xb0) = local_24;
      if (local_24 == 0x40) {
        *(undefined4 *)(param_1 + 0xb8) = 0x3f;
        uVar3 = *(uint *)(param_1 + 0xbc);
LAB_005a1e53:
        uVar3 = uVar3 | 2;
      }
      else {
        if (local_24 < 0x41) {
          if (local_24 == 0) {
            lVar5 = FUN_004a1430(0);
            if ((lVar5 != 0) && (*(code **)(lVar5 + 0xd8) != (code *)0x0)) {
              iVar2 = (**(code **)(lVar5 + 0xd8))(param_1 + 0xb0,param_1 + 0x88,param_1 + 0x98);
              if (iVar2 != 0) goto LAB_005a1e33;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/x509_set.c",0xdd,"x509_sig_info_init");
            FUN_0051f8f0(0xb,0x8e,0);
            uVar1 = 0;
            goto LAB_005a1d60;
          }
          if (local_24 != 4) goto LAB_005a1d8e;
          uVar1 = 0x27;
        }
        else {
          uVar1 = 0x69;
          if (local_24 != 0x329) {
LAB_005a1d8e:
            uVar4 = FUN_00423b00(local_24);
            lVar5 = FUN_0040d800(uVar4);
            if (lVar5 == 0) {
              FUN_0051f420(0);
              uVar1 = 0;
              FUN_0051f540("../crypto/x509/x509_set.c",0xff,"x509_sig_info_init");
              FUN_0051f8f0(0xb,0x8d,0);
              goto LAB_005a1d60;
            }
            iVar2 = FUN_0040ac10();
            *(int *)(param_1 + 0xb8) = iVar2 << 2;
LAB_005a1e33:
            uVar3 = *(uint *)(param_1 + 0xbc);
            if ((local_24 == 0x40) || (local_24 - 0x2a0U < 3)) goto LAB_005a1e53;
            goto LAB_005a1d51;
          }
        }
        *(undefined4 *)(param_1 + 0xb8) = uVar1;
        uVar3 = *(uint *)(param_1 + 0xbc);
      }
LAB_005a1d51:
      uVar1 = 1;
      *(uint *)(param_1 + 0xbc) = uVar3 | 1;
      goto LAB_005a1d60;
    }
  }
  FUN_0051f420();
  uVar1 = 0;
  FUN_0051f540("../crypto/x509/x509_set.c",0xd1,"x509_sig_info_init");
  FUN_0051f8f0(0xb,0x90,0);
LAB_005a1d60:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

