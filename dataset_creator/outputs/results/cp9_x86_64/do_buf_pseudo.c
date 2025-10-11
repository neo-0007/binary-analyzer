
int do_buf(uint *param_1,uint param_2,uint param_3,ushort param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  uint *str;
  int iVar8;
  uchar *str_00;
  long in_FS_OFFSET;
  uint local_70;
  ulong local_50;
  uchar local_46;
  uchar auStack_45 [5];
  long local_40;
  
  uVar6 = param_3 & 7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (uint *)((long)(int)param_2 + (long)param_1);
  if (uVar6 == 2) {
    if ((param_2 & 1) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_strex.c",0xa1,"do_buf");
      iVar8 = -1;
      ERR_set_error(0xd,0x81,0);
      goto LAB_005a3128;
    }
  }
  else if ((uVar6 == 4) && ((param_2 & 3) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_strex.c",0x9b,"do_buf");
    iVar8 = -1;
    ERR_set_error(0xd,0x85,0);
    goto LAB_005a3128;
  }
  iVar8 = 0;
  if (param_1 != puVar4) {
    iVar8 = 0;
    uVar5 = (param_4 & 1) << 5;
    str = param_1;
    local_70 = param_2;
    uVar7 = uVar5;
    if (uVar6 == 2) goto LAB_005a307f;
LAB_005a300b:
    if (uVar6 < 3) {
      if (uVar6 == 0) {
        iVar2 = UTF8_getc((uchar *)str,local_70,&local_50);
        if (-1 < iVar2) {
          local_70 = local_70 - iVar2;
          str = (uint *)((long)str + (long)iVar2);
          goto LAB_005a302f;
        }
      }
      else if (uVar6 == 1) {
        local_50 = (ulong)(byte)*str;
        str = (uint *)((long)str + 1);
LAB_005a302f:
        if (str == puVar4) goto LAB_005a309a;
LAB_005a3036:
        if ((param_3 & 8) != 0) goto LAB_005a30ae;
        while (iVar2 = do_esc_char(local_50,uVar7 | param_4,param_5,param_6,param_7), -1 < iVar2) {
          iVar8 = iVar8 + iVar2;
          while( true ) {
            if (str == puVar4) goto LAB_005a3128;
            uVar7 = 0;
            if (str == param_1) {
              uVar7 = uVar5;
            }
            if (uVar6 != 2) goto LAB_005a300b;
LAB_005a307f:
            uVar1 = *str;
            str = (uint *)((long)str + 2);
            local_50 = (ulong)(ushort)((ushort)uVar1 << 8 | (ushort)uVar1 >> 8);
            if (str != puVar4) goto LAB_005a3036;
LAB_005a309a:
            if ((param_4 & 1) != 0) {
              uVar7 = 0x40;
            }
            if ((param_3 & 8) == 0) break;
LAB_005a30ae:
            str_00 = &local_46;
            iVar2 = UTF8_putc(str_00,6,local_50);
            if (0 < iVar2) {
              do {
                iVar3 = do_esc_char(*str_00,uVar7 | param_4,param_5,param_6,param_7);
                if (iVar3 < 0) goto LAB_005a3122;
                iVar8 = iVar8 + iVar3;
                str_00 = str_00 + 1;
              } while (auStack_45 + (iVar2 - 1) != str_00);
            }
          }
        }
      }
    }
    else if (uVar6 == 4) {
      uVar1 = *str;
      str = str + 1;
      local_50 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18);
      goto LAB_005a302f;
    }
LAB_005a3122:
    iVar8 = -1;
  }
LAB_005a3128:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar8;
}

