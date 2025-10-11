
undefined8
_nss_dns_getcanonname_r
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
          undefined4 *param_5,undefined4 *param_6)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ushort *puVar6;
  ulong uVar7;
  short *psVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  undefined1 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = local_58;
  lVar5 = __resolv_context_get();
  if (lVar5 == 0) {
    uVar11 = 0xffffffff;
    *param_5 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    *param_6 = 0xffffffff;
  }
  else {
    psVar8 = &qtypes;
    do {
      sVar2 = *psVar8;
      iVar3 = __res_context_query(lVar5,param_1,1,(long)sVar2,local_58,0x14,&local_60,0,0,0,0);
      puVar9 = local_60;
      if (iVar3 < 1) {
LAB_007b7080:
        puVar9 = local_58;
        if (local_60 != local_58) {
          free(local_60);
          local_60 = local_58;
        }
      }
      else if (*(short *)(local_60 + 4) == 0x100) {
        puVar1 = local_60 + iVar3;
        uVar10 = (uint)(ushort)(*(ushort *)(local_60 + 6) << 8 | *(ushort *)(local_60 + 6) >> 8);
        iVar3 = dn_skipname(local_60 + 0xc,puVar1);
        if (-1 < iVar3) {
          puVar9 = puVar9 + (long)iVar3 + 0x10;
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            iVar3 = dn_skipname(puVar9,puVar1);
            if ((iVar3 < 0) ||
               (puVar6 = (ushort *)(puVar9 + iVar3), (long)puVar1 - (long)puVar6 < 10))
            goto LAB_007b7168;
            uVar7 = (ulong)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
            if ((long)sVar2 == uVar7) {
              iVar3 = dn_expand(local_60,puVar1,puVar9,param_2,param_3);
              puVar9 = local_60;
              if (iVar3 < 0) {
                if (*(int *)(in_FS_OFFSET + -0x58) != 0x5a) goto LAB_007b7168;
                uVar11 = 0xfffffffe;
                *param_5 = 0x22;
                *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
                uVar4 = 0xffffffff;
              }
              else {
                uVar11 = 1;
                *param_4 = param_2;
                uVar4 = *(undefined4 *)(in_FS_OFFSET + -0x18);
              }
              goto LAB_007b7032;
            }
            if ((uVar7 != 5) || (puVar6[1] != 0x100)) goto LAB_007b7168;
            uVar7 = (ulong)(ushort)(puVar6[4] << 8 | puVar6[4] >> 8);
            if ((long)puVar1 - (long)(puVar6 + 5) < (long)uVar7) goto LAB_007b7168;
            puVar9 = (undefined1 *)((long)(puVar6 + 5) + uVar7);
          }
          goto LAB_007b7080;
        }
LAB_007b7168:
        uVar11 = 0xffffffff;
        uVar4 = *(undefined4 *)(in_FS_OFFSET + -0x18);
        puVar9 = local_60;
        goto LAB_007b7032;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != (short *)"%u.%u.%u.%u.in-addr.arpa");
    uVar11 = 0xffffffff;
    uVar4 = *(undefined4 *)(in_FS_OFFSET + -0x18);
LAB_007b7032:
    *param_6 = uVar4;
    if (puVar9 != local_58) {
      free(puVar9);
    }
    __resolv_context_put(lVar5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

