
undefined4 FUN_00406090(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    iVar1 = FUN_0040ac10();
    if (-1 < iVar1) {
      lVar3 = *(long *)(param_1 + 8);
      if (*(long *)(lVar3 + 0x70) == 0) {
        if (0x40 < iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00418e30("assertion failed: mdsize <= EVP_MAX_MD_SIZE","../crypto/evp/digest.c",0x1cd,
                       (long)iVar1);
        }
        uVar2 = (**(code **)(lVar3 + 0x30))(param_1,param_2);
        if (param_3 != (int *)0x0) {
          *param_3 = iVar1;
        }
        lVar3 = *(long *)(param_1 + 8);
        if (*(code **)(lVar3 + 0x40) != (code *)0x0) {
          (**(code **)(lVar3 + 0x40))(param_1);
          FUN_0040b0c0(param_1,2);
          lVar3 = *(long *)(param_1 + 8);
        }
        FUN_004227b0(*(undefined8 *)(param_1 + 0x20),(long)*(int *)(lVar3 + 0x4c));
        goto LAB_00406153;
      }
      if (*(code **)(lVar3 + 0xa0) == (code *)0x0) {
        FUN_0051f420();
        uVar4 = 0x1ba;
      }
      else {
        uVar2 = (**(code **)(lVar3 + 0xa0))(*(undefined8 *)(param_1 + 0x38),param_2,&local_38);
        if (param_3 == (int *)0x0) goto LAB_00406153;
        if (local_38 >> 0x20 == 0) {
          *param_3 = (int)local_38;
          goto LAB_00406153;
        }
        FUN_0051f420();
        uVar4 = 0x1c4;
      }
      FUN_0051f540("../crypto/evp/digest.c",uVar4,"EVP_DigestFinal_ex");
      FUN_0051f8f0(6,0xbc,0);
    }
  }
  uVar2 = 0;
LAB_00406153:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

