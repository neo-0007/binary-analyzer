
undefined8
ccm_cipher_internal(byte *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,
                   ulong param_5)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  bVar1 = *param_1;
  if ((bVar1 & 2) == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x20) != -1) {
    iVar2 = ossl_prov_is_running();
    if (((iVar2 != 0) && (param_4 != (undefined8 *)0x0)) &&
       ((param_4 == param_2 && (lVar3 = *(long *)(param_1 + 0x10), lVar3 + 8U <= param_5)))) {
      if ((*param_1 & 1) != 0) {
        *param_2 = *(undefined8 *)(param_1 + 0x40);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      lVar3 = param_5 - lVar3;
      uVar5 = lVar3 - 8;
      *(undefined8 *)(param_1 + 0x34) = *param_4;
      iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 8))
                        (param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),uVar5);
      if (iVar2 != 0) {
        *param_1 = *param_1 | 0x10;
        iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x10))
                          (param_1,param_1 + 0x40,*(undefined8 *)(param_1 + 0x20));
        if (iVar2 != 0) {
          if ((*param_1 & 1) == 0) {
            iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                              (param_1,param_4 + 1,param_2 + 1,uVar5,(long)param_4 + lVar3,
                               *(undefined8 *)(param_1 + 0x10));
            if (iVar2 != 0) {
              uVar4 = 1;
              goto LAB_00484ade;
            }
          }
          else {
            iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x18))
                              (param_1,param_4 + 1,param_2 + 1,uVar5,(long)param_2 + lVar3);
            if (iVar2 != 0) {
              uVar4 = 1;
              uVar5 = lVar3 + *(long *)(param_1 + 0x10);
              goto LAB_00484ade;
            }
          }
        }
      }
    }
    uVar5 = 0;
    uVar4 = 0;
LAB_00484ade:
    *param_3 = uVar5;
    return uVar4;
  }
  if ((param_4 == (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    param_5 = 0;
LAB_00484989:
    uVar4 = 1;
    goto LAB_0048498f;
  }
  if ((bVar1 & 4) != 0) {
    if (param_2 == (undefined8 *)0x0) {
      if (param_4 == (undefined8 *)0x0) {
        iVar2 = (**(code **)(lVar3 + 8))
                          (param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),param_5);
        if (iVar2 != 0) {
          *param_1 = *param_1 | 0x10;
          uVar4 = 1;
          goto LAB_0048498f;
        }
      }
      else if ((((bVar1 & 0x10) != 0) || (param_5 == 0)) &&
              (iVar2 = (**(code **)(lVar3 + 0x10))(param_1,param_4,param_5), iVar2 != 0))
      goto LAB_00484989;
    }
    else {
      if ((bVar1 & 0x10) == 0) {
        iVar2 = (**(code **)(lVar3 + 8))
                          (param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),param_5);
        if (iVar2 == 0) goto LAB_00484ac8;
        bVar1 = *param_1 | 0x10;
        *param_1 = bVar1;
      }
      if ((bVar1 & 1) == 0) {
        if (((bVar1 & 8) != 0) &&
           (iVar2 = (**(code **)(lVar3 + 0x20))
                              (param_1,param_4,param_2,param_5,param_1 + 0x40,
                               *(undefined8 *)(param_1 + 0x10)), iVar2 != 0)) {
          *param_1 = *param_1 & 0xe3;
          uVar4 = 1;
          goto LAB_0048498f;
        }
      }
      else {
        iVar2 = (**(code **)(lVar3 + 0x18))(param_1,param_4,param_2,param_5,0,0);
        if (iVar2 != 0) {
          *param_1 = *param_1 | 8;
          uVar4 = 1;
          goto LAB_0048498f;
        }
      }
    }
  }
LAB_00484ac8:
  param_5 = 0;
  uVar4 = 0;
LAB_0048498f:
  *param_3 = param_5;
  return uVar4;
}

