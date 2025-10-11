
void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  qsort_r(__base,__nmemb,__size,(__compar_d_fn_t)__compar,(void *)0x0);
  return;
}

