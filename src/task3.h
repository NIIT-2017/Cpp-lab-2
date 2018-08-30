

template <class T, size_t N> void map(T (&arr)[N], T(*change)(T)){
	
	
	
	for (int i = 0; i < N;i++) {
		arr[i]=change(arr[i]);
	}
	
}


template<class T> T change(T var) {
	return var*var;
}


template<> char* change(char *var) {
	for (int i = 0; i < strlen(var); i++) {
		var[i] = rand()%('z'-'a'+1)+'a';
	}
	return var;
}



