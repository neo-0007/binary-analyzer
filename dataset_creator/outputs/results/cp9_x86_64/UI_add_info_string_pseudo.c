
int UI_add_info_string(UI *ui,char *text)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = general_allocate_prompt_constprop_0(text,0,4,0,0);
  if (lVar2 == 0) {
    iVar1 = -1;
  }
  else {
    lVar3 = *(long *)(ui + 8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(ui + 8) = lVar3;
      if (lVar3 == 0) {
        free_string(lVar2);
        return -1;
      }
    }
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    iVar1 = OPENSSL_sk_push(lVar3,lVar2);
    if (iVar1 < 1) {
      free_string(lVar2);
      return iVar1 + -1;
    }
  }
  return iVar1;
}

