
void twalk(void *__root,__action_fn_t __action)

{
  VISIT __value;
  ulong uVar1;
  
  if (__root == (void *)0x0) {
    return;
  }
  if (__action == (__action_fn_t)0x0) {
    return;
  }
  if (((*(ulong *)((long)__root + 8) & 0xfffffffffffffffe) != 0) ||
     (__value = leaf, *(long *)((long)__root + 0x10) != 0)) {
    (*__action)(__root,preorder,0);
    uVar1 = *(ulong *)((long)__root + 8) & 0xfffffffffffffffe;
    if (uVar1 != 0) {
      trecurse(uVar1,__action,1);
    }
    (*__action)(__root,postorder,0);
    if (*(long *)((long)__root + 0x10) != 0) {
      trecurse(*(long *)((long)__root + 0x10),__action,1);
    }
    __value = endorder;
  }
                    /* WARNING: Could not recover jumptable at 0x00766597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__action)(__root,__value,0);
  return;
}

