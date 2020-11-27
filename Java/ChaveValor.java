import java.util.HashMap;
import java.util.Map;

public class ChaveValor<K, V> {
    private Map<K,V> mapping;

    public ChaveValor() {
        mapping = new HashMap<>();
    }

    public V getValor(K key) {
        return this.mapping.get(key);
    }

    public void setValor(K key, V value) {
        this.mapping.put(key, value);
    }

	public char[] getValor(String nome) {
		return null;
	}
}
