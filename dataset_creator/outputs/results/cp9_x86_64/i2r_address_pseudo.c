
undefined8 i2r_address(BIO *param_1,int param_2,undefined1 param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  long in_FS_OFFSET;
  byte local_58 [14];
  char local_4a [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (-1 < *param_4) {
    if (param_2 == 1) {
      iVar4 = addr_expand(local_58,param_4,4,param_3);
      if (iVar4 != 0) {
        BIO_printf(param_1,"%d.%d.%d.%d",(ulong)local_58[0],(ulong)local_58[1],(ulong)local_58[2],
                   (ulong)local_58[3]);
        uVar5 = 1;
        goto LAB_00604596;
      }
    }
    else {
      if (param_2 != 2) {
        if (*param_4 != 0) {
          lVar8 = 0;
          pcVar7 = "";
          bVar2 = **(byte **)(param_4 + 2);
          while( true ) {
            lVar8 = lVar8 + 1;
            BIO_printf(param_1,"%s%02x",pcVar7,(ulong)bVar2);
            if (*param_4 <= (int)lVar8) break;
            pcVar7 = ":";
            bVar2 = *(byte *)(*(long *)(param_4 + 2) + lVar8);
          }
        }
        BIO_printf(param_1,"[%d]",(ulong)((uint)*(undefined8 *)(param_4 + 4) & 7));
        uVar5 = 1;
        goto LAB_00604596;
      }
      iVar4 = addr_expand(local_58,param_4,0x10,param_3);
      if (iVar4 != 0) {
        pcVar7 = local_4a;
        iVar4 = 0x10;
        do {
          if ((pcVar7[1] != '\0') || (iVar6 = iVar4 + -2, *pcVar7 != '\0')) {
            lVar8 = 0;
            do {
              pbVar1 = local_58 + lVar8;
              pcVar7 = ":";
              if (lVar8 == 0xe) {
                pcVar7 = "";
              }
              lVar3 = lVar8 + 1;
              lVar8 = lVar8 + 2;
              BIO_printf(param_1,"%x%s",(ulong)CONCAT11(*pbVar1,local_58[lVar3]),pcVar7);
            } while ((int)lVar8 < iVar4);
            if (iVar4 - 1U >> 1 != 7) {
              BIO_puts(param_1,":");
            }
            uVar5 = 1;
            goto LAB_00604596;
          }
          pcVar7 = pcVar7 + -2;
          iVar4 = iVar6;
        } while (iVar6 != 0);
        BIO_puts(param_1,":");
        BIO_puts(param_1,":");
        uVar5 = 1;
        goto LAB_00604596;
      }
    }
  }
  uVar5 = 0;
LAB_00604596:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

