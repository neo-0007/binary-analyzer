
long ossl_a2i_ipadd(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = strchr(param_2,0x3a);
  if (pcVar3 == (char *)0x0) {
    iVar2 = ipv4_from_asc(param_1,param_2);
    lVar4 = (ulong)(iVar2 != 0) << 2;
    goto LAB_0058a48a;
  }
  local_40 = 0;
  local_48 = -0x100000000;
  iVar2 = CONF_parse_list(param_2,0x3a,0,ipv6_cb,&local_58);
  if (iVar2 != 0) {
    iVar1 = local_48._4_4_;
    iVar2 = (int)local_48;
    if (local_48._4_4_ == -1) {
      if ((int)local_48 == 0x10) {
LAB_0058a4d5:
        lVar4 = 0x10;
        *param_1 = local_58;
        param_1[1] = uStack_50;
        goto LAB_0058a48a;
      }
    }
    else if (((int)local_48 != 0x10) && (local_40 < 4)) {
      if (local_40 == 3) {
        if ((int)local_48 < 1) {
LAB_0058a4fa:
          if (local_48 < 0) goto LAB_0058a4d5;
          sVar5 = (size_t)local_48._4_4_;
          memcpy(param_1,&local_58,sVar5);
          memset((void *)((long)param_1 + sVar5),0,(long)(0x10 - iVar2));
          lVar4 = 0x10;
          if (iVar1 == iVar2) goto LAB_0058a48a;
LAB_0058a45c:
          memcpy((void *)((long)param_1 + ((long)iVar1 - (long)iVar2) + 0x10),
                 (void *)((long)&local_58 + (long)iVar1),(long)(iVar2 - iVar1));
          lVar4 = 0x10;
          goto LAB_0058a48a;
        }
      }
      else if (local_40 == 2) {
        if ((local_48._4_4_ == (int)local_48) || (local_48._4_4_ == 0)) goto LAB_0058a4fa;
      }
      else if ((local_48._4_4_ != 0) && (local_48._4_4_ != (int)local_48)) {
        if (local_48 < 0) goto LAB_0058a4d5;
        sVar5 = (size_t)local_48._4_4_;
        memcpy(param_1,&local_58,sVar5);
        memset((void *)((long)param_1 + sVar5),0,(long)(0x10 - iVar2));
        goto LAB_0058a45c;
      }
    }
  }
  lVar4 = 0;
LAB_0058a48a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar4;
}

