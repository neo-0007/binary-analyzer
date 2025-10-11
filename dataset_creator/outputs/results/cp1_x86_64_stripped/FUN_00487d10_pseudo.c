
undefined8 FUN_00487d10(long param_1,long param_2,ulong *param_3,long param_4,ulong param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0x28) == -1) {
    if (((*(byte *)(param_1 + 0x54) & 4) != 0) && (iVar4 = *(int *)(param_1 + 0x50), iVar4 != 3)) {
      if (iVar4 == 0) {
        if (((((*(byte *)(param_1 + 0x54) & 1) != 0) && (0xb < *(ulong *)(param_1 + 0x10))) &&
            (iVar4 = (int)*(ulong *)(param_1 + 0x10), 0 < iVar4)) &&
           (iVar4 = FUN_00429580(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x55,(long)iVar4,0),
           0 < iVar4)) {
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
          *(undefined4 *)(param_1 + 0x50) = 1;
LAB_00487f04:
          iVar4 = (**(code **)(lVar3 + 8))(param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
          if (iVar4 != 0) {
            *(undefined4 *)(param_1 + 0x50) = 2;
            goto LAB_00487da9;
          }
        }
      }
      else {
        if (iVar4 == 1) goto LAB_00487f04;
LAB_00487da9:
        if (param_4 == 0) {
          if ((((*(byte *)(param_1 + 0x54) & 1) != 0) || (*(long *)(param_1 + 0x18) != -1)) &&
             (iVar4 = (**(code **)(lVar3 + 0x20))(param_1,param_1 + 0xd5), iVar4 != 0)) {
            *(undefined4 *)(param_1 + 0x50) = 3;
            uVar5 = 1;
            param_5 = 0;
            goto LAB_00487ddc;
          }
        }
        else {
          if (param_2 == 0) {
            iVar4 = (**(code **)(lVar3 + 0x10))(param_1,param_4,param_5);
          }
          else {
            iVar4 = (**(code **)(lVar3 + 0x18))(param_1,param_4,param_5,param_2);
          }
          if (iVar4 != 0) {
            uVar5 = 1;
            goto LAB_00487ddc;
          }
        }
      }
    }
    uVar5 = 0;
    param_5 = 0;
    goto LAB_00487ddc;
  }
  iVar4 = FUN_0043b840();
  if (((iVar4 == 0) || ((*(byte *)(param_1 + 0x54) & 4) == 0)) ||
     ((param_4 != param_2 || (param_5 < 0x18)))) {
LAB_00487eb8:
    uVar5 = 0;
    param_5 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      plVar1 = (long *)(param_1 + 0x30);
      *plVar1 = *plVar1 + 1;
      if (*plVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/ciphercommon_gcm.c",0x20a,
                     "gcm_tls_cipher");
        FUN_0051f8f0(0x39,0x7e,0);
      }
      else {
        iVar4 = FUN_00487bf0(param_1,param_2,8);
        if (iVar4 != 0) goto LAB_00487e43;
      }
      goto LAB_00487eb8;
    }
    iVar4 = FUN_00487ca0(param_1,param_2,8);
    if (iVar4 == 0) goto LAB_00487eb8;
LAB_00487e43:
    param_2 = param_2 + 8;
    uVar2 = param_5 - 0x18;
    lVar3 = param_4 + 8;
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      lVar3 = param_2;
    }
    iVar4 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x28))
                      (param_1,param_1 + 0xd5,*(undefined8 *)(param_1 + 0x28),param_4 + 8,uVar2,
                       param_2);
    if (iVar4 == 0) {
      if ((*(byte *)(param_1 + 0x54) & 1) != 0) goto LAB_00487eb8;
      FUN_004227b0(param_2,uVar2,lVar3 + uVar2,0x10);
      uVar5 = 0;
      param_5 = 0;
    }
    else {
      uVar5 = 1;
      if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
        param_5 = uVar2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 3;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
LAB_00487ddc:
  *param_3 = param_5;
  return uVar5;
}

