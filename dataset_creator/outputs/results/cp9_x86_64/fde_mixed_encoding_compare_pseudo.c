
int fde_mixed_encoding_compare(long param_1,long param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong local_28;
  ulong local_20;
  
  bVar1 = get_cie_encoding((param_2 + 4) - (long)*(int *)(param_2 + 4));
  if (bVar1 == 0xff) {
LAB_006c478d:
    uVar4 = 0;
  }
  else {
    bVar3 = bVar1 & 0x70;
    if (bVar3 != 0x20) {
      if (bVar3 < 0x21) {
        if ((bVar1 & 0x60) != 0) goto code_r0x0040454e;
      }
      else {
        if (bVar3 == 0x30) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          goto LAB_006c4710;
        }
        if (bVar3 != 0x50) {
                    /* WARNING: Subroutine does not return */
          fde_mixed_encoding_compare_cold();
        }
      }
      goto LAB_006c478d;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
LAB_006c4710:
  read_encoded_value_with_base(bVar1,uVar4,param_2 + 8,&local_28);
  bVar1 = get_cie_encoding((param_3 + 4) - (long)*(int *)(param_3 + 4));
  if (bVar1 != 0xff) {
    bVar3 = bVar1 & 0x70;
    if (bVar3 == 0x20) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      goto LAB_006c4750;
    }
    if (bVar3 < 0x21) {
      if ((bVar1 & 0x60) != 0) {
code_r0x0040454e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (bVar3 == 0x30) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        goto LAB_006c4750;
      }
      if (bVar3 != 0x50) {
                    /* WARNING: Subroutine does not return */
        fde_mixed_encoding_compare_cold();
      }
    }
  }
  uVar4 = 0;
LAB_006c4750:
  read_encoded_value_with_base(bVar1,uVar4,param_3 + 8,&local_20);
  iVar2 = 1;
  if (local_28 <= local_20) {
    iVar2 = -(uint)(local_28 < local_20);
  }
  return iVar2;
}

