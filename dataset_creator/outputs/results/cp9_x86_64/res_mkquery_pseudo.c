
int res_mkquery(uint param_1,char *param_2,uint param_3,uint param_4,char *param_5,
               undefined8 param_6,undefined8 param_7,ushort *param_8,int param_9)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  u_char *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort uVar9;
  long in_FS_OFFSET;
  timespec local_f8;
  ushort *local_e8;
  undefined8 local_e0;
  u_char *local_48;
  long local_40;
  
  uVar2 = (ushort)param_4;
  uVar9 = (ushort)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)__resolv_context_get_preinit();
  if (plVar4 == (long *)0x0) {
    iVar8 = -1;
    goto LAB_007bf63e;
  }
  if ((((param_3 | param_4) < 0x10000) && (param_8 != (ushort *)0x0)) && (0xb < param_9)) {
    param_8[0] = 0;
    param_8[1] = 0;
    param_8[2] = 0;
    param_8[3] = 0;
    param_8[4] = 0;
    param_8[5] = 0;
    clock_gettime(1,&local_f8);
    *param_8 = (ushort)((uint)local_f8.tv_sec ^ (uint)local_f8.tv_nsec) ^
               (ushort)(((uint)local_f8.tv_sec ^ (uint)local_f8.tv_nsec) >> 8);
    *(byte *)(param_8 + 1) = (byte)param_8[1] & 0x87 | (byte)((param_1 & 0xf) << 3);
    uVar1 = *(ulong *)(*plVar4 + 8);
    if ((uVar1 & 0x4000000) != 0) {
      *(byte *)((long)param_8 + 3) = *(byte *)((long)param_8 + 3) | 0x20;
    }
    local_e8 = param_8;
    puVar6 = param_8 + 6;
    local_e0 = 0;
    param_8[1] = (ushort)(uVar1 >> 6) & 1 | param_8[1] & 0xf0fe;
    if (param_1 == 0) {
      if (-1 < param_9 + -0x10) {
        iVar8 = ns_name_compress(param_2,(u_char *)puVar6,(long)(param_9 + -0x10),
                                 (u_char **)&local_e8,&local_48);
        if (-1 < iVar8) {
          puVar6 = (ushort *)((long)iVar8 + (long)puVar6);
          *puVar6 = uVar2 << 8 | uVar2 >> 8;
          puVar7 = puVar6 + 2;
          puVar6[1] = uVar9 << 8 | uVar9 >> 8;
          param_8[2] = 0x100;
          goto LAB_007bf759;
        }
      }
      goto LAB_007bf630;
    }
    if (param_1 != 4) goto LAB_007bf630;
    iVar8 = 4;
    if (param_5 != (char *)0x0) {
      iVar8 = 0xe;
    }
    iVar8 = (param_9 + -0xc) - iVar8;
    if (iVar8 < 0) goto LAB_007bf630;
    iVar3 = ns_name_compress(param_2,(u_char *)puVar6,(long)iVar8,(u_char **)&local_e8,&local_48);
    if (iVar3 < 0) goto LAB_007bf630;
    uVar9 = uVar9 << 8 | uVar9 >> 8;
    puVar6 = (ushort *)((long)iVar3 + (long)puVar6);
    *puVar6 = uVar2 << 8 | uVar2 >> 8;
    puVar7 = puVar6 + 2;
    puVar6[1] = uVar9;
    param_8[2] = 0x100;
    if (param_5 != (char *)0x0) {
      iVar8 = ns_name_compress(param_5,(u_char *)puVar7,(long)(iVar8 - iVar3),(u_char **)&local_e8,
                               &local_48);
      if (iVar8 < 0) goto LAB_007bf630;
      puVar5 = (u_char *)((long)iVar8 + (long)puVar7);
      puVar5[0] = '\0';
      puVar5[1] = '\n';
      puVar7 = (ushort *)(puVar5 + 10);
      *(ushort *)(puVar5 + 2) = uVar9;
      puVar5[4] = '\0';
      puVar5[5] = '\0';
      puVar5[6] = '\0';
      puVar5[7] = '\0';
      puVar5[8] = '\0';
      puVar5[9] = '\0';
      param_8[5] = 0x100;
    }
LAB_007bf759:
    iVar8 = (int)puVar7 - (int)param_8;
    if (1 < iVar8) {
      *(ushort *)(*plVar4 + 0x44) = *param_8;
    }
  }
  else {
LAB_007bf630:
    iVar8 = -1;
  }
  __resolv_context_put(plVar4);
LAB_007bf63e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

