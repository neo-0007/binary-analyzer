
undefined8 prefix_write(BIO *param_1,long param_2,ulong param_3,long *param_4)

{
  char cVar1;
  uint uVar2;
  char *__s;
  undefined8 *puVar3;
  size_t sVar4;
  BIO *pBVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)BIO_get_data();
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    if ((((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) &&
       (*(int *)(puVar3 + 1) == 0)) {
      if (param_3 != 0) {
        *(uint *)((long)puVar3 + 0xc) = (uint)(*(char *)(param_2 + -1 + param_3) == '\n');
      }
      pBVar5 = BIO_next(param_1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BIO_write_ex(pBVar5,param_2,param_3,param_4);
        return uVar6;
      }
      goto LAB_005abad3;
    }
    *param_4 = 0;
    while (param_3 != 0) {
      if (*(int *)((long)puVar3 + 0xc) != 0) {
        __s = (char *)*puVar3;
        if (__s != (char *)0x0) {
          sVar4 = strlen(__s);
          pBVar5 = BIO_next(param_1);
          uVar6 = BIO_write_ex(pBVar5,__s,sVar4,&local_48);
          if ((int)uVar6 == 0) goto LAB_005aba82;
        }
        uVar2 = *(uint *)(puVar3 + 1);
        pBVar5 = BIO_next(param_1);
        BIO_printf(pBVar5,"%*s",(ulong)uVar2,&DAT_008343a2);
        *(undefined4 *)((long)puVar3 + 0xc) = 0;
      }
      uVar7 = 0;
      do {
        cVar1 = *(char *)(param_2 + uVar7);
        uVar7 = uVar7 + 1;
        if (cVar1 == '\n') break;
      } while (uVar7 < param_3);
      do {
        local_48 = 0;
        pBVar5 = BIO_next(param_1);
        uVar6 = BIO_write_ex(pBVar5,param_2,uVar7,&local_48);
        if ((int)uVar6 == 0) goto LAB_005aba82;
        *param_4 = *param_4 + local_48;
        param_2 = param_2 + local_48;
        param_3 = param_3 - local_48;
        uVar7 = uVar7 - local_48;
      } while (uVar7 != 0);
      if (cVar1 == '\n') {
        *(undefined4 *)((long)puVar3 + 0xc) = 1;
      }
    }
    uVar6 = 1;
  }
LAB_005aba82:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_005abad3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

