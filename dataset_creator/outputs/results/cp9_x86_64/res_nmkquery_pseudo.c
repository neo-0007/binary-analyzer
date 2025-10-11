
ulong res_nmkquery(undefined8 param_1,uint param_2,char *param_3,uint param_4,uint param_5,
                  char *param_6,undefined8 param_7,undefined8 param_8,ushort *param_9,int param_10)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ushort *puVar5;
  u_char *puVar6;
  ushort uVar7;
  ulong uVar8;
  ushort *puVar9;
  long in_FS_OFFSET;
  timespec local_f8;
  ushort *local_e8;
  undefined8 local_e0;
  u_char *local_48;
  long local_40;
  
  uVar1 = (ushort)param_5;
  uVar7 = (ushort)param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)__resolv_context_get_override();
  if (plVar4 == (long *)0x0) {
    uVar8 = 0xffffffff;
    goto LAB_007bf36e;
  }
  if ((((param_4 | param_5) < 0x10000) && (param_9 != (ushort *)0x0)) && (0xb < param_10)) {
    param_9[0] = 0;
    param_9[1] = 0;
    param_9[2] = 0;
    param_9[3] = 0;
    param_9[4] = 0;
    param_9[5] = 0;
    clock_gettime(1,&local_f8);
    *param_9 = (ushort)((uint)local_f8.tv_sec ^ (uint)local_f8.tv_nsec) ^
               (ushort)(((uint)local_f8.tv_sec ^ (uint)local_f8.tv_nsec) >> 8);
    *(byte *)(param_9 + 1) = (byte)param_9[1] & 0x87 | (byte)((param_2 & 0xf) << 3);
    uVar8 = *(ulong *)(*plVar4 + 8);
    if ((uVar8 & 0x4000000) != 0) {
      *(byte *)((long)param_9 + 3) = *(byte *)((long)param_9 + 3) | 0x20;
    }
    local_e8 = param_9;
    puVar5 = param_9 + 6;
    local_e0 = 0;
    param_9[1] = (ushort)(uVar8 >> 6) & 1 | param_9[1] & 0xf0fe;
    if (param_2 == 0) {
      if (-1 < param_10 + -0x10) {
        iVar2 = ns_name_compress(param_3,(u_char *)puVar5,(long)(param_10 + -0x10),
                                 (u_char **)&local_e8,&local_48);
        if (-1 < iVar2) {
          puVar5 = (ushort *)((long)iVar2 + (long)puVar5);
          *puVar5 = uVar1 << 8 | uVar1 >> 8;
          puVar9 = puVar5 + 2;
          puVar5[1] = uVar7 << 8 | uVar7 >> 8;
          param_9[2] = 0x100;
          goto LAB_007bf48b;
        }
      }
      goto LAB_007bf360;
    }
    if (param_2 != 4) goto LAB_007bf360;
    iVar2 = 4;
    if (param_6 != (char *)0x0) {
      iVar2 = 0xe;
    }
    iVar2 = (param_10 + -0xc) - iVar2;
    if (iVar2 < 0) goto LAB_007bf360;
    iVar3 = ns_name_compress(param_3,(u_char *)puVar5,(long)iVar2,(u_char **)&local_e8,&local_48);
    if (iVar3 < 0) goto LAB_007bf360;
    uVar7 = uVar7 << 8 | uVar7 >> 8;
    puVar5 = (ushort *)((long)iVar3 + (long)puVar5);
    *puVar5 = uVar1 << 8 | uVar1 >> 8;
    puVar9 = puVar5 + 2;
    puVar5[1] = uVar7;
    param_9[2] = 0x100;
    if (param_6 != (char *)0x0) {
      iVar2 = ns_name_compress(param_6,(u_char *)puVar9,(long)(iVar2 - iVar3),(u_char **)&local_e8,
                               &local_48);
      if (iVar2 < 0) goto LAB_007bf360;
      puVar6 = (u_char *)((long)iVar2 + (long)puVar9);
      puVar6[0] = '\0';
      puVar6[1] = '\n';
      puVar9 = (ushort *)(puVar6 + 10);
      *(ushort *)(puVar6 + 2) = uVar7;
      puVar6[4] = '\0';
      puVar6[5] = '\0';
      puVar6[6] = '\0';
      puVar6[7] = '\0';
      puVar6[8] = '\0';
      puVar6[9] = '\0';
      param_9[5] = 0x100;
    }
LAB_007bf48b:
    uVar8 = (long)puVar9 - (long)param_9 & 0xffffffff;
    if (1 < (int)((long)puVar9 - (long)param_9)) {
      *(ushort *)(*plVar4 + 0x44) = *param_9;
    }
  }
  else {
LAB_007bf360:
    uVar8 = 0xffffffff;
  }
  __resolv_context_put(plVar4);
LAB_007bf36e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

