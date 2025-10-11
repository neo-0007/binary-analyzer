
/* WARNING: Removing unreachable block (ram,0x007b9618) */
/* WARNING: Removing unreachable block (ram,0x007b91f3) */
/* WARNING: Removing unreachable block (ram,0x007b986c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong _nss_dns_gethostbyaddr2_r
                (byte *param_1,uint param_2,undefined4 param_3,long param_4,long param_5,
                ulong param_6,undefined4 *param_7,undefined4 *param_8,undefined8 param_9)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_8b8 [8];
  undefined1 auStack_8b0 [1024];
  undefined8 local_4b0;
  undefined1 auStack_4a8 [8];
  ulong local_4a0;
  ulong local_498;
  undefined1 *local_490;
  undefined4 local_488;
  undefined4 local_484;
  undefined8 local_480;
  long local_478;
  long local_470;
  undefined4 *local_468;
  char *local_460;
  undefined1 *local_450;
  char local_448 [3];
  undefined1 local_445;
  char local_444;
  undefined1 local_443;
  char local_442;
  undefined1 local_441;
  char local_440;
  undefined1 local_43f;
  char local_43e;
  undefined1 local_43d;
  char local_43c;
  undefined1 local_43b;
  char local_43a;
  undefined1 local_439;
  char local_438;
  undefined1 local_437;
  char local_436;
  undefined1 local_435;
  char local_434;
  undefined1 local_433;
  char local_432;
  undefined1 local_431;
  char local_430;
  undefined1 local_42f;
  char local_42e;
  undefined1 local_42d;
  char local_42c;
  undefined1 local_42b;
  char local_42a;
  undefined1 local_429;
  char local_428;
  undefined1 local_427;
  char local_426;
  undefined1 local_425;
  char local_424;
  undefined1 local_423;
  char local_422;
  undefined1 local_421;
  char local_420;
  undefined1 local_41f;
  char local_41e;
  undefined1 local_41d;
  char local_41c;
  undefined1 local_41b;
  char local_41a;
  undefined1 local_419;
  char local_418;
  undefined1 local_417;
  char local_416;
  undefined1 local_415;
  char local_414;
  undefined1 local_413;
  char local_412;
  undefined1 local_411;
  char local_410;
  undefined1 local_40f;
  char local_40e;
  undefined1 local_40d;
  char local_40c;
  undefined1 local_40b;
  char local_40a;
  undefined1 local_409;
  undefined8 local_408;
  undefined1 local_400;
  long local_40;
  
  uVar6 = (ulong)(-(int)param_5 & 7);
  puVar5 = auStack_4a8;
  local_468 = param_7;
  local_480 = param_9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_484 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  local_478 = param_5;
  local_470 = param_4;
  if ((param_6 <= uVar6) || (local_498 = param_6 - uVar6, local_498 < 0x318)) {
    uVar6 = 0xfffffffe;
    *param_7 = 0x22;
    *param_8 = 0xffffffff;
    puVar5 = auStack_4a8;
    goto LAB_007b9148;
  }
  local_460 = (char *)CONCAT44(local_460._4_4_,param_3);
  uVar7 = (ulong)param_2;
  local_4b0 = 0x7b9194;
  lVar2 = __resolv_context_get();
  if (lVar2 == 0) {
    uVar6 = 0xffffffff;
    *local_468 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    *param_8 = 0xffffffff;
    goto LAB_007b9148;
  }
  if (((int)local_460 == 10) && (param_2 == 0x10)) {
    if (((*(long *)param_1 == 0) && (*(int *)(param_1 + 8) == -0x10000)) ||
       ((*(long *)param_1 == 0 &&
        ((*(int *)(param_1 + 8) == 0 && (*(int *)(param_1 + 0xc) != 0x1000000)))))) {
      param_1 = param_1 + 0xc;
      param_2 = 4;
      local_4a0 = 4;
LAB_007b965e:
      local_490 = auStack_8b0;
      local_460 = local_448;
      local_450 = local_490;
      sprintf(local_460,"%u.%u.%u.%u.in-addr.arpa",(ulong)param_1[3],(ulong)param_1[2],
              (ulong)param_1[1],(ulong)*param_1);
      local_488 = 2;
    }
    else {
      local_4a0 = 0x10;
      param_2 = 0x10;
LAB_007b91eb:
      local_460 = local_448;
      local_490 = auStack_8b0;
      local_448[2] = "0123456789abcdef"[param_1[0xf] >> 4];
      local_448[0] = "0123456789abcdef"[param_1[0xf] & 0xf];
      local_442 = "0123456789abcdef"[param_1[0xe] >> 4];
      local_444 = "0123456789abcdef"[param_1[0xe] & 0xf];
      local_43e = "0123456789abcdef"[param_1[0xd] >> 4];
      local_440 = "0123456789abcdef"[param_1[0xd] & 0xf];
      local_43a = "0123456789abcdef"[param_1[0xc] >> 4];
      local_43c = "0123456789abcdef"[param_1[0xc] & 0xf];
      local_436 = "0123456789abcdef"[param_1[0xb] >> 4];
      local_438 = "0123456789abcdef"[param_1[0xb] & 0xf];
      local_434 = "0123456789abcdef"[param_1[10] & 0xf];
      local_432 = "0123456789abcdef"[param_1[10] >> 4];
      local_42e = "0123456789abcdef"[param_1[9] >> 4];
      local_430 = "0123456789abcdef"[param_1[9] & 0xf];
      local_42a = "0123456789abcdef"[param_1[8] >> 4];
      local_42c = "0123456789abcdef"[param_1[8] & 0xf];
      local_426 = "0123456789abcdef"[param_1[7] >> 4];
      local_428 = "0123456789abcdef"[param_1[7] & 0xf];
      local_422 = "0123456789abcdef"[param_1[6] >> 4];
      local_424 = "0123456789abcdef"[param_1[6] & 0xf];
      local_420 = "0123456789abcdef"[param_1[5] & 0xf];
      local_41e = "0123456789abcdef"[param_1[5] >> 4];
      local_41a = "0123456789abcdef"[param_1[4] >> 4];
      local_41c = "0123456789abcdef"[param_1[4] & 0xf];
      local_418 = "0123456789abcdef"[param_1[3] & 0xf];
      local_416 = "0123456789abcdef"[param_1[3] >> 4];
      local_448[1] = 0x2e;
      local_443 = 0x2e;
      local_43f = 0x2e;
      local_43b = 0x2e;
      local_412 = "0123456789abcdef"[param_1[2] >> 4];
      local_414 = "0123456789abcdef"[param_1[2] & 0xf];
      local_437 = 0x2e;
      local_433 = 0x2e;
      local_42f = 0x2e;
      local_42b = 0x2e;
      local_40e = "0123456789abcdef"[param_1[1] >> 4];
      local_410 = "0123456789abcdef"[param_1[1] & 0xf];
      local_427 = 0x2e;
      local_423 = 0x2e;
      local_41f = 0x2e;
      local_41b = 0x2e;
      local_40c = "0123456789abcdef"[*param_1 & 0xf];
      local_40a = "0123456789abcdef"[*param_1 >> 4];
      local_417 = 0x2e;
      local_413 = 0x2e;
      local_40f = 0x2e;
      local_40b = 0x2e;
      local_445 = 0x2e;
      local_441 = 0x2e;
      local_43d = 0x2e;
      local_439 = 0x2e;
      local_435 = 0x2e;
      local_431 = 0x2e;
      local_42d = 0x2e;
      local_429 = 0x2e;
      local_425 = 0x2e;
      local_421 = 0x2e;
      local_41d = 0x2e;
      local_419 = 0x2e;
      local_415 = 0x2e;
      local_411 = 0x2e;
      local_40d = 0x2e;
      local_409 = 0x2e;
      local_408 = 0x617072612e367069;
      local_400 = 0;
      local_488 = 10;
      local_450 = local_490;
    }
    iVar1 = __res_context_query(lVar2,local_460,1,0xc,local_450,0x400);
    if (iVar1 < 0) {
      *param_8 = *(undefined4 *)(in_FS_OFFSET + -0x18);
      *(undefined4 *)(in_FS_OFFSET + -0x58) = local_484;
      if (local_450 != local_490) {
        free(local_450);
      }
      __resolv_context_put(lVar2);
      uVar6 = (ulong)-(uint)(*(int *)(in_FS_OFFSET + -0x58) == 0x6f);
      puVar5 = auStack_8b8;
    }
    else {
      lVar4 = uVar6 + local_478;
      iVar1 = getanswer_r_constprop_0(lVar2,local_450,iVar1,local_460,0xc,local_470);
      if (local_450 != local_490) {
        local_460 = (char *)CONCAT44(local_460._4_4_,iVar1);
        free(local_450);
        iVar1 = (int)local_460;
      }
      local_460 = (char *)CONCAT44(local_460._4_4_,iVar1);
      if (iVar1 == 1) {
        *(ulong *)(local_470 + 0x10) = CONCAT44(param_2,local_488);
        pvVar3 = memcpy((void *)(lVar4 + 0x180),param_1,local_4a0);
        *(undefined8 *)(lVar4 + 0x198) = 0;
        *(void **)(lVar4 + 400) = pvVar3;
        *param_8 = 0;
      }
      __resolv_context_put(lVar2);
      uVar6 = (ulong)local_460 & 0xffffffff;
      puVar5 = auStack_8b8;
    }
  }
  else {
    if ((int)local_460 == 2) {
      local_4a0 = uVar7;
      if (3 < param_2) goto LAB_007b965e;
    }
    else if (((int)local_460 == 10) && (local_4a0 = uVar7, 0xf < param_2)) goto LAB_007b91eb;
    *local_468 = 0x61;
    *param_8 = 0xffffffff;
    local_4b0 = 0x7b95de;
    __resolv_context_put(lVar2);
    uVar6 = 0xffffffff;
    puVar5 = auStack_4a8;
  }
LAB_007b9148:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = _nss_dns_gethostbyaddr_r;
  __stack_chk_fail_local();
}

