
void print_distpoint_isra_0(BIO *param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  X509_NAME local_48;
  long local_20;
  
  uVar1 = (ulong)param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    BIO_printf(param_1,"%*sFull Name:\n",uVar1,&DAT_008343a2);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      print_gens_isra_0(param_1,*(undefined8 *)(param_2 + 2),uVar1);
      return;
    }
  }
  else {
    local_48.entries = *(stack_st_X509_NAME_ENTRY **)(param_2 + 2);
    BIO_printf(param_1,"%*sRelative Name:\n%*s",uVar1,&DAT_008343a2,(ulong)(param_3 + 2));
    X509_NAME_print_ex(param_1,&local_48,0,0x82031f);
    BIO_puts(param_1,"\n");
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

