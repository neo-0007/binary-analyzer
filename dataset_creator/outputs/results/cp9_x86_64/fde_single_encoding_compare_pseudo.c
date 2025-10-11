
int fde_single_encoding_compare(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong local_28;
  ulong local_20;
  
  uVar2 = *(ushort *)(param_1 + 0x20) >> 3;
  bVar1 = (byte)uVar2;
  if (bVar1 != 0xff) {
    bVar4 = bVar1 & 0x70;
    if (bVar4 == 0x20) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      goto LAB_006c4638;
    }
    if (bVar4 < 0x21) {
      if ((uVar2 & 0x60) != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (bVar4 == 0x30) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        goto LAB_006c4638;
      }
      if (bVar4 != 0x50) {
                    /* WARNING: Subroutine does not return */
        fde_single_encoding_compare_cold();
      }
    }
  }
  uVar5 = 0;
LAB_006c4638:
  read_encoded_value_with_base(bVar1,uVar5,param_2 + 8,&local_28);
  read_encoded_value_with_base(bVar1,uVar5,param_3 + 8,&local_20);
  iVar3 = 1;
  if (local_28 <= local_20) {
    iVar3 = -(uint)(local_28 < local_20);
  }
  return iVar3;
}

