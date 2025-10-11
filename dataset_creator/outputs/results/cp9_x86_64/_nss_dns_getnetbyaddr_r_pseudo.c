
/* WARNING: Removing unreachable block (ram,0x007ba10a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int _nss_dns_getnetbyaddr_r
              (ulong param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
              undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_898 [8];
  undefined1 auStack_890 [1024];
  undefined8 local_490;
  undefined1 auStack_488 [8];
  undefined1 *local_480;
  undefined1 *local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined4 *local_460;
  undefined1 *local_450;
  char local_448 [1032];
  long local_40;
  
  puVar5 = auStack_488;
  local_460 = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_478 = (undefined1 *)CONCAT44(local_478._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
  local_470 = param_5;
  local_468 = param_4;
  if (param_2 == 2) {
    uVar8 = param_1 & 0xffffffff;
    uVar7 = (uint)param_1;
    local_490 = 0x7ba095;
    lVar2 = __resolv_context_get();
    if (lVar2 == 0) {
      *param_6 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      iVar1 = -1;
      *local_460 = 0xffffffff;
      puVar5 = auStack_488;
    }
    else {
      cVar6 = (char)uVar8;
      if (uVar7 != 0) {
        uVar4 = param_1 & 0xff;
        if (uVar7 >> 8 == 0) {
          local_490 = 0x7ba2b8;
          sprintf(local_448,"0.0.0.%u.in-addr.arpa",uVar4);
        }
        else {
          bVar3 = (byte)(param_1 >> 8);
          if (uVar7 >> 0x10 == 0) {
            local_490 = 0x7ba278;
            sprintf(local_448,"0.0.%u.%u.in-addr.arpa",uVar4,(ulong)bVar3);
          }
          else if (uVar7 >> 0x18 == 0) {
            local_490 = 0x7ba294;
            sprintf(local_448,"0.%u.%u.%u.in-addr.arpa",uVar4,(ulong)bVar3);
          }
          else {
            local_490 = 0x7ba102;
            sprintf(local_448,"%u.%u.%u.%u.in-addr.arpa",uVar4,(ulong)bVar3);
          }
        }
      }
      local_480 = auStack_890;
      local_450 = local_480;
      iVar1 = __res_context_query(lVar2,local_448,1,0xc,local_480,0x400);
      if (iVar1 < 0) {
        iVar1 = *(int *)(in_FS_OFFSET + -0x58);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_478._0_4_;
        if (local_450 != local_480) {
          free(local_450);
        }
        __resolv_context_put(lVar2);
        iVar1 = -(uint)(iVar1 - 0x60U < 2 || iVar1 == 0x6f);
        puVar5 = auStack_898;
      }
      else {
        local_478 = local_480;
        iVar1 = getanswer_r(local_450,iVar1,param_3,local_468,local_470,param_6);
        if (local_450 != local_478) {
          free(local_450);
        }
        if (iVar1 == 1) {
          for (; (cVar6 == '\0' && (uVar7 = (uint)uVar8, uVar7 != 0)); uVar8 = uVar8 >> 8) {
            uVar7 = (uint)(uVar8 >> 8);
            cVar6 = (char)(uVar8 >> 8);
          }
          *(uint *)(param_3 + 0x14) = uVar7;
        }
        __resolv_context_put(lVar2);
        puVar5 = auStack_898;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -8) = &UNK_007ba31d;
  __stack_chk_fail_local();
}

