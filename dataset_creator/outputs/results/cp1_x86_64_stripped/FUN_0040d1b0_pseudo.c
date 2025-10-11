
ulong FUN_0040d1b0(long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  piVar1 = *(int **)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (piVar1 == (int *)0x0) {
LAB_0040d2c0:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/m_sigver.c",0x26d,"EVP_DigestVerifyFinal");
    FUN_0051f8f0(6,0x86,0);
  }
  else {
    if (((*piVar1 != 0x100) || (*(long *)(piVar1 + 0xc) == 0)) || (*(long *)(piVar1 + 10) == 0)) {
      lVar6 = *(long *)(piVar1 + 0x1e);
      if (lVar6 == 0) goto LAB_0040d2c0;
      if ((*(byte *)(piVar1 + 0x28) & 1) != 0) {
        iVar4 = (**(code **)(lVar6 + 0xf8))(piVar1,param_1);
        if (iVar4 == 0) goto LAB_0040d2f0;
        lVar6 = *(long *)(piVar1 + 0x1e);
      }
      *(byte *)(piVar1 + 0x28) = *(byte *)(piVar1 + 0x28) & 0xfe;
      if (*(code **)(lVar6 + 0x88) == (code *)0x0) {
        bVar2 = false;
        if ((*(ulong *)(param_1 + 0x18) & 0x200) == 0) goto LAB_0040d338;
        bVar2 = false;
        uVar5 = FUN_00406090(param_1,local_88,&local_8c);
      }
      else {
        bVar2 = true;
        if ((*(ulong *)(param_1 + 0x18) & 0x200) != 0) {
          uVar5 = (**(code **)(lVar6 + 0x88))(piVar1,param_2,param_3 & 0xffffffff,param_1);
          goto LAB_0040d278;
        }
LAB_0040d338:
        lVar6 = FUN_00405f40();
        if (lVar6 == 0) {
          uVar5 = 0xffffffff;
          goto LAB_0040d278;
        }
        iVar4 = FUN_004074f0(lVar6,param_1);
        if (iVar4 == 0) {
          FUN_00406b90(lVar6);
          uVar5 = 0xffffffff;
          goto LAB_0040d278;
        }
        if (bVar2) {
          uVar3 = (**(code **)(*(long *)(*(long *)(lVar6 + 0x28) + 0x78) + 0x88))
                            (*(long *)(lVar6 + 0x28),param_2,param_3 & 0xffffffff,lVar6);
        }
        else {
          uVar3 = FUN_00406090(lVar6,local_88,&local_8c);
        }
        FUN_00406b90(lVar6);
        uVar5 = (ulong)uVar3;
      }
      if (((int)uVar5 != 0) && (!bVar2)) {
        uVar5 = FUN_00416d20(piVar1,param_2,param_3,local_88,local_8c);
      }
      goto LAB_0040d278;
    }
    if ((*(byte *)(param_1 + 0x19) & 2) != 0) {
      uVar5 = (**(code **)(*(long *)(piVar1 + 10) + 0x98))();
      goto LAB_0040d278;
    }
    lVar6 = FUN_00413680(piVar1);
    if (lVar6 != 0) {
      uVar3 = (**(code **)(*(long *)(lVar6 + 0x28) + 0x98))
                        (*(undefined8 *)(lVar6 + 0x30),param_2,param_3);
      FUN_00412f00(lVar6);
      uVar5 = (ulong)uVar3;
      goto LAB_0040d278;
    }
  }
LAB_0040d2f0:
  uVar5 = 0;
LAB_0040d278:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

